//
//  ViewController.swift
//  SCP_demo
//
//  Created by Golan Shoval Gil on 29/10/2023.
//

import UIKit
import MessengerTransport

struct Statement {
    let text: String
}

class ViewController: UIViewController {

    var client: MessagingClient!
    var uploadState: Attachment.State?
    var messageWithAttachment: String?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        let config = Configuration(deploymentId: "6bc62f74-c646-4c0e-b593-1dd4267b8b5b",
                                   domain: "inindca.com",
                                   logging: false,
                                   reconnectionTimeoutInSeconds: 300)
        
        let transport = MessengerTransport(configuration: config)
        client = transport.createMessagingClient()
        
        client.eventListener = { event in
            print("eventListener: \(event)")
        }
        
        client.messageListener = { message in
            print("messageListener: \(message)")
            switch message {
            case let message as MessageEvent.AttachmentUpdated:
                print("attachment state: \(message.attachment.state.description)")
//                self.uploadState = message.attachment.state
                
//                if message.attachment.state is Attachment.StateUploaded {
//                    if let text = self.messageWithAttachment {
//                        try? self.client.sendMessage(text: text)
//                        self.uploadState = nil
//                        self.messageWithAttachment = nil
//                    }
//                }
            default:
                break
            }
        }
        
        client.stateChangedListener = { state in
            print("stateChangedListener: \(state)")
        }
        
        try? client.connect()
        
    }
    
    @IBAction func sendMessage(_ sender: UIButton) {
        let alert = UIAlertController(title: "Send Message", message: "Enter the text you'd like to send.", preferredStyle: .alert)
        
        alert.addTextField { (textField) in
            textField.placeholder = "Enter text here"
        }
        
        alert.addAction(UIAlertAction(title: "Send", style: .default, handler: { [weak alert] (_) in
            if let textField = alert?.textFields?[0], let text = textField.text {
//                if self.uploadState is Attachment.StateUploaded {
                    try? self.client?.sendMessage(text: text)
//                    self.uploadState = nil
//                    self.messageWithAttachment = nil
//
//                } else {
//                    self.messageWithAttachment = text
//                }
            }
        }))
        
        alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
        
        self.present(alert, animated: true, completion: nil)
    }
    
    @IBAction func showImageSizeOptions(_ sender: Any) {
        let actionSheet = UIAlertController(title: "Select Image Size", message: "Choose the image size you'd like to upload.", preferredStyle: .actionSheet)
        
        actionSheet.addAction(UIAlertAction(title: "8 MB", style: .default, handler: { _ in
            self.attachImg(fileName: "true_size_image_8MB.jpg")
        }))
        actionSheet.addAction(UIAlertAction(title: "12 MB", style: .default, handler: { _ in
            self.attachImg(fileName: "true_size_image_12MB.jpg")
        }))
        actionSheet.addAction(UIAlertAction(title: "30 MB", style: .default, handler: { _ in
            self.attachImg(fileName: "true_size_image_30MB.jpg")
        }))        
        actionSheet.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
        
        self.present(actionSheet, animated: true, completion: nil)
    }
    func attachImg(fileName: String) {
        print("fileName: \(fileName)")
        
        if let myImage = UIImage(named: fileName) {
            print("myImage.size: \(myImage.size)")
            
            if let imageData = myImage.jpegData(compressionQuality: 1) {
                let imageSize = imageData.count
                print("imageSize: \(imageSize)")
                
                DispatchQueue.main.async {
                    let byteArray = self.getArrayOfBytesFromImage(data: imageData)
                    do {
                        try self.client.attach(byteArray: byteArray, fileName: fileName)

                    } catch {
                        print(error)
                    }
                }
            }
        }
    }
    
    func getArrayOfBytesFromImage(data: Data) -> KotlinByteArray {
        let swiftByteArray: [UInt8] = (data as NSData).toByteArray()
        let intArray : [Int8] = swiftByteArray
            .map { Int8(bitPattern: $0) }
        let kotlinByteArray: KotlinByteArray =  KotlinByteArray.init(size: Int32(swiftByteArray.count))
        for (index, element) in intArray.enumerated() {
            kotlinByteArray.set(index: Int32(index), value: element)
        }
        return kotlinByteArray
    }
}


extension NSData {
    func toByteArray() -> [UInt8] {
        let count = self.length / MemoryLayout<Int8>.size
        var bytes = [UInt8](repeating: 0, count: count)

        self.getBytes(&bytes, length:count * MemoryLayout<Int8>.size)

        return bytes
    }
}
