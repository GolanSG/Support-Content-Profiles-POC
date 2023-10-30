#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class GCMTokenStore, GCMVaultKeys, GCMVault, GCMAttachmentState, GCMAttachmentCompanion, GCMAttachment, GCMAttachmentStateCompanion, GCMKotlinArray<T>, GCMAttachmentStateDetached, GCMAttachmentStateDetaching, GCMErrorCode, GCMAttachmentStateError, GCMAttachmentStatePresigning, GCMAttachmentStateSending, GCMAttachmentStateSent, GCMAttachmentStateUploaded, GCMAttachmentStateUploading, GCMConfiguration, GCMCorrectiveAction, GCMCorrectiveActionBadRequest, GCMCorrectiveActionCustomAttributeSizeTooLarge, GCMCorrectiveActionForbidden, GCMCorrectiveActionNotFound, GCMCorrectiveActionReAuthenticate, GCMCorrectiveActionRequestTimeOut, GCMCorrectiveActionTooManyRequests, GCMCorrectiveActionUnknown, GCMErrorCodeAttachmentHasExpired, GCMErrorCodeAttachmentNotFound, GCMErrorCodeAttachmentNotSuccessfullyUploaded, GCMErrorCodeAuthFailed, GCMErrorCodeAuthLogoutFailed, GCMErrorCodeCancellationError, GCMErrorCodeClearConversationFailure, GCMErrorCodeClientResponseError, GCMErrorCodeCustomAttributeSizeTooLarge, GCMErrorCodeFeatureUnavailable, GCMErrorCodeFileContentInvalid, GCMErrorCodeFileNameInvalid, GCMErrorCodeFileNameTooLong, GCMErrorCodeFileSizeInvalid, GCMErrorCodeFileTypeInvalid, GCMErrorCodeHistoryFetchFailure, GCMErrorCodeMessageTooLong, GCMErrorCodeMissingParameter, GCMErrorCodeNetworkDisabled, GCMErrorCodeRedirectResponseError, GCMErrorCodeRefreshAuthTokenFailure, GCMErrorCodeRequestRateTooHigh, GCMErrorCodeServerResponseError, GCMErrorCodeSessionHasExpired, GCMErrorCodeSessionNotFound, GCMErrorCodeUnexpectedError, GCMErrorCodeWebsocketAccessDenied, GCMErrorCodeWebsocketError, GCMErrorMessage, GCMMessageDirection, GCMMessageState, GCMEvent, GCMMessageParticipant, GCMMessageCompanion, GCMMessage, GCMMessageContentType, GCMMessageContentCompanion, GCMMessageContent, GCMKotlinEnumCompanion, GCMKotlinEnum<E>, GCMMessageContentTypeCompanion, GCMMessageDirectionCompanion, GCMMessageParticipantOriginatingEntity, GCMMessageParticipantCompanion, GCMMessageParticipantOriginatingEntityCompanion, GCMMessageStateCompanion, GCMMessageStateError, GCMMessageStateIdle, GCMMessageStateSending, GCMMessageStateSent, GCMMessageEvent, GCMKotlinByteArray, GCMMessagingClientState, GCMStateChange, GCMMessagingClientStateClosed, GCMMessagingClientStateClosing, GCMMessagingClientStateConfigured, GCMMessagingClientStateConnected, GCMMessagingClientStateConnecting, GCMMessagingClientStateError, GCMMessagingClientStateIdle, GCMMessagingClientStateReadOnly, GCMMessagingClientStateReconnecting, GCMMessengerTransportCompanion, GCMDeploymentConfig, GCMEventCompanion, GCMEventAgentTyping, GCMEventAuthorized, GCMEventConnectionClosed, GCMEventConversationAutostart, GCMEventConversationCleared, GCMEventConversationDisconnect, GCMEventError, GCMEventHealthChecked, GCMEventLogout, GCMConversations, GCMAppsCompanion, GCMApps, GCMAuthCompanion, GCMAuth, GCMConversationsAutoStart, GCMConversationsConversationDisconnect, GCMConversationsConversationClear, GCMConversationsCompanion, GCMConversationsAutoStartCompanion, GCMConversationsConversationClearCompanion, GCMConversationsConversationDisconnectType, GCMConversationsConversationDisconnectCompanion, GCMConversationsConversationDisconnectTypeCompanion, GCMMessenger, GCMJourneyEvents, GCMDeploymentConfigStatus, GCMDeploymentConfigCompanion, GCMDeploymentConfigStatusCompanion, GCMMode, GCMFileUploadCompanion, GCMFileUpload, GCMJourneyEventsCompanion, GCMLauncherButtonCompanion, GCMLauncherButton, GCMStyles, GCMMessengerCompanion, GCMModeCompanion, GCMStylesCompanion, GCMKotlinThrowable, GCMKotlinException, GCMKotlinRuntimeException, GCMKotlinByteIterator, GCMKotlinx_serialization_coreSerializersModule, GCMKotlinx_serialization_coreSerialKind, GCMKotlinNothing;

@protocol GCMKotlinx_serialization_coreKSerializer, GCMKotlinComparable, GCMCustomAttributesStore, GCMMessagingClient, GCMKotlinx_serialization_coreEncoder, GCMKotlinx_serialization_coreSerialDescriptor, GCMKotlinx_serialization_coreSerializationStrategy, GCMKotlinx_serialization_coreDecoder, GCMKotlinx_serialization_coreDeserializationStrategy, GCMKotlinIterator, GCMKotlinx_serialization_coreCompositeEncoder, GCMKotlinAnnotation, GCMKotlinx_serialization_coreCompositeDecoder, GCMKotlinx_serialization_coreSerializersModuleCollector, GCMKotlinKClass, GCMKotlinKDeclarationContainer, GCMKotlinKAnnotatedElement, GCMKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface GCMBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface GCMBase (GCMBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface GCMMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface GCMMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorGCMKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface GCMNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface GCMByte : GCMNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface GCMUByte : GCMNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface GCMShort : GCMNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface GCMUShort : GCMNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface GCMInt : GCMNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface GCMUInt : GCMNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface GCMLong : GCMNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface GCMULong : GCMNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface GCMFloat : GCMNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface GCMDouble : GCMNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface GCMBoolean : GCMNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("TokenStore")))
@interface GCMTokenStore : GCMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use [Vault] instead.")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)fetch __attribute__((swift_name("fetch()")));
- (void)storeToken:(NSString *)token __attribute__((swift_name("store(token:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultTokenStore")))
@interface GCMDefaultTokenStore : GCMTokenStore
- (instancetype)initWithStoreKey:(NSString *)storeKey __attribute__((swift_name("init(storeKey:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use [Vault] instead.")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString * _Nullable)fetch __attribute__((swift_name("fetch()")));
- (void)storeToken:(NSString *)token __attribute__((swift_name("store(token:)")));
@end

__attribute__((swift_name("Vault")))
@interface GCMVault : GCMBase
- (instancetype)initWithKeys:(GCMVaultKeys *)keys __attribute__((swift_name("init(keys:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)fetchKey:(NSString *)key __attribute__((swift_name("fetch(key:)")));
- (void)storeKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("store(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultVault")))
@interface GCMDefaultVault : GCMVault
- (instancetype)initWithKeys:(GCMVaultKeys *)keys __attribute__((swift_name("init(keys:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)fetchKey:(NSString *)key __attribute__((swift_name("fetch(key:)")));
- (void)storeKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("store(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vault.Keys")))
@interface GCMVaultKeys : GCMBase
- (instancetype)initWithVaultKey:(NSString *)vaultKey tokenKey:(NSString *)tokenKey authRefreshTokenKey:(NSString *)authRefreshTokenKey __attribute__((swift_name("init(vaultKey:tokenKey:authRefreshTokenKey:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMVaultKeys *)doCopyVaultKey:(NSString *)vaultKey tokenKey:(NSString *)tokenKey authRefreshTokenKey:(NSString *)authRefreshTokenKey __attribute__((swift_name("doCopy(vaultKey:tokenKey:authRefreshTokenKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authRefreshTokenKey __attribute__((swift_name("authRefreshTokenKey")));
@property (readonly) NSString *tokenKey __attribute__((swift_name("tokenKey")));
@property (readonly) NSString *vaultKey __attribute__((swift_name("vaultKey")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment")))
@interface GCMAttachment : GCMBase
- (instancetype)initWithId:(NSString *)id fileName:(NSString * _Nullable)fileName state:(GCMAttachmentState *)state __attribute__((swift_name("init(id:fileName:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMAttachmentCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMAttachmentState *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMAttachment *)doCopyId:(NSString *)id fileName:(NSString * _Nullable)fileName state:(GCMAttachmentState *)state __attribute__((swift_name("doCopy(id:fileName:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) GCMAttachmentState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.Companion")))
@interface GCMAttachmentCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMAttachmentCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Attachment.State")))
@interface GCMAttachmentState : GCMBase
@property (class, readonly, getter=companion) GCMAttachmentStateCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.StateCompanion")))
@interface GCMAttachmentStateCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMAttachmentStateCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(GCMKotlinArray<id<GCMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.StateDetached")))
@interface GCMAttachmentStateDetached : GCMAttachmentState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)detached __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMAttachmentStateDetached *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.StateDetaching")))
@interface GCMAttachmentStateDetaching : GCMAttachmentState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)detaching __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMAttachmentStateDetaching *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.StateError")))
@interface GCMAttachmentStateError : GCMAttachmentState
- (instancetype)initWithErrorCode:(GCMErrorCode *)errorCode errorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorCode:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (GCMErrorCode *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMAttachmentStateError *)doCopyErrorCode:(GCMErrorCode *)errorCode errorMessage:(NSString *)errorMessage __attribute__((swift_name("doCopy(errorCode:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMErrorCode *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.StatePresigning")))
@interface GCMAttachmentStatePresigning : GCMAttachmentState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)presigning __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMAttachmentStatePresigning *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.StateSending")))
@interface GCMAttachmentStateSending : GCMAttachmentState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sending __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMAttachmentStateSending *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.StateSent")))
@interface GCMAttachmentStateSent : GCMAttachmentState
- (instancetype)initWithDownloadUrl:(NSString *)downloadUrl __attribute__((swift_name("init(downloadUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMAttachmentStateSent *)doCopyDownloadUrl:(NSString *)downloadUrl __attribute__((swift_name("doCopy(downloadUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *downloadUrl __attribute__((swift_name("downloadUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.StateUploaded")))
@interface GCMAttachmentStateUploaded : GCMAttachmentState
- (instancetype)initWithDownloadUrl:(NSString *)downloadUrl __attribute__((swift_name("init(downloadUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMAttachmentStateUploaded *)doCopyDownloadUrl:(NSString *)downloadUrl __attribute__((swift_name("doCopy(downloadUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *downloadUrl __attribute__((swift_name("downloadUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment.StateUploading")))
@interface GCMAttachmentStateUploading : GCMAttachmentState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)uploading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMAttachmentStateUploading *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Configuration")))
@interface GCMConfiguration : GCMBase
- (instancetype)initWithDeploymentId:(NSString *)deploymentId domain:(NSString *)domain logging:(BOOL)logging reconnectionTimeoutInSeconds:(int64_t)reconnectionTimeoutInSeconds __attribute__((swift_name("init(deploymentId:domain:logging:reconnectionTimeoutInSeconds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDeploymentId:(NSString *)deploymentId domain:(NSString *)domain logging:(BOOL)logging reconnectionTimeoutInSeconds:(int64_t)reconnectionTimeoutInSeconds autoRefreshTokenWhenExpired:(BOOL)autoRefreshTokenWhenExpired __attribute__((swift_name("init(deploymentId:domain:logging:reconnectionTimeoutInSeconds:autoRefreshTokenWhenExpired:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMConfiguration *)doCopyDeploymentId:(NSString *)deploymentId domain:(NSString *)domain logging:(BOOL)logging reconnectionTimeoutInSeconds:(int64_t)reconnectionTimeoutInSeconds autoRefreshTokenWhenExpired:(BOOL)autoRefreshTokenWhenExpired __attribute__((swift_name("doCopy(deploymentId:domain:logging:reconnectionTimeoutInSeconds:autoRefreshTokenWhenExpired:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL autoRefreshTokenWhenExpired __attribute__((swift_name("autoRefreshTokenWhenExpired")));
@property (readonly) NSString *deploymentId __attribute__((swift_name("deploymentId")));
@property (readonly) BOOL logging __attribute__((swift_name("logging")));
@property (readonly) int64_t reconnectionTimeoutInSeconds __attribute__((swift_name("reconnectionTimeoutInSeconds")));
@end

__attribute__((swift_name("CorrectiveAction")))
@interface GCMCorrectiveAction : GCMBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectiveAction.BadRequest")))
@interface GCMCorrectiveActionBadRequest : GCMCorrectiveAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)badRequest __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMCorrectiveActionBadRequest *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectiveAction.CustomAttributeSizeTooLarge")))
@interface GCMCorrectiveActionCustomAttributeSizeTooLarge : GCMCorrectiveAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)customAttributeSizeTooLarge __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMCorrectiveActionCustomAttributeSizeTooLarge *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectiveAction.Forbidden")))
@interface GCMCorrectiveActionForbidden : GCMCorrectiveAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forbidden __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMCorrectiveActionForbidden *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectiveAction.NotFound")))
@interface GCMCorrectiveActionNotFound : GCMCorrectiveAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notFound __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMCorrectiveActionNotFound *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectiveAction.ReAuthenticate")))
@interface GCMCorrectiveActionReAuthenticate : GCMCorrectiveAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reAuthenticate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMCorrectiveActionReAuthenticate *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectiveAction.RequestTimeOut")))
@interface GCMCorrectiveActionRequestTimeOut : GCMCorrectiveAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requestTimeOut __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMCorrectiveActionRequestTimeOut *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectiveAction.TooManyRequests")))
@interface GCMCorrectiveActionTooManyRequests : GCMCorrectiveAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tooManyRequests __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMCorrectiveActionTooManyRequests *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectiveAction.Unknown")))
@interface GCMCorrectiveActionUnknown : GCMCorrectiveAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unknown __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMCorrectiveActionUnknown *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CustomAttributesStore")))
@protocol GCMCustomAttributesStore
@required
- (void)addCustomAttributes:(NSDictionary<NSString *, NSString *> *)customAttributes __attribute__((swift_name("add(customAttributes:)")));
- (NSDictionary<NSString *, NSString *> *)get __attribute__((swift_name("get()")));
@end

__attribute__((swift_name("ErrorCode")))
@interface GCMErrorCode : GCMBase
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.AttachmentHasExpired")))
@interface GCMErrorCodeAttachmentHasExpired : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)attachmentHasExpired __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeAttachmentHasExpired *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.AttachmentNotFound")))
@interface GCMErrorCodeAttachmentNotFound : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)attachmentNotFound __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeAttachmentNotFound *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.AttachmentNotSuccessfullyUploaded")))
@interface GCMErrorCodeAttachmentNotSuccessfullyUploaded : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)attachmentNotSuccessfullyUploaded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeAttachmentNotSuccessfullyUploaded *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.AuthFailed")))
@interface GCMErrorCodeAuthFailed : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authFailed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeAuthFailed *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.AuthLogoutFailed")))
@interface GCMErrorCodeAuthLogoutFailed : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authLogoutFailed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeAuthLogoutFailed *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.CancellationError")))
@interface GCMErrorCodeCancellationError : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancellationError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeCancellationError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.ClearConversationFailure")))
@interface GCMErrorCodeClearConversationFailure : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)clearConversationFailure __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeClearConversationFailure *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.ClientResponseError")))
@interface GCMErrorCodeClientResponseError : GCMErrorCode
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMErrorCodeClientResponseError *)doCopyValue:(int32_t)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.CustomAttributeSizeTooLarge")))
@interface GCMErrorCodeCustomAttributeSizeTooLarge : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)customAttributeSizeTooLarge __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeCustomAttributeSizeTooLarge *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.FeatureUnavailable")))
@interface GCMErrorCodeFeatureUnavailable : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)featureUnavailable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeFeatureUnavailable *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.FileContentInvalid")))
@interface GCMErrorCodeFileContentInvalid : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fileContentInvalid __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeFileContentInvalid *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.FileNameInvalid")))
@interface GCMErrorCodeFileNameInvalid : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fileNameInvalid __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeFileNameInvalid *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.FileNameTooLong")))
@interface GCMErrorCodeFileNameTooLong : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fileNameTooLong __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeFileNameTooLong *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.FileSizeInvalid")))
@interface GCMErrorCodeFileSizeInvalid : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fileSizeInvalid __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeFileSizeInvalid *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.FileTypeInvalid")))
@interface GCMErrorCodeFileTypeInvalid : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fileTypeInvalid __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeFileTypeInvalid *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.HistoryFetchFailure")))
@interface GCMErrorCodeHistoryFetchFailure : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)historyFetchFailure __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeHistoryFetchFailure *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.MessageTooLong")))
@interface GCMErrorCodeMessageTooLong : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)messageTooLong __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeMessageTooLong *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.MissingParameter")))
@interface GCMErrorCodeMissingParameter : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)missingParameter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeMissingParameter *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.NetworkDisabled")))
@interface GCMErrorCodeNetworkDisabled : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)networkDisabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeNetworkDisabled *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.RedirectResponseError")))
@interface GCMErrorCodeRedirectResponseError : GCMErrorCode
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMErrorCodeRedirectResponseError *)doCopyValue:(int32_t)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.RefreshAuthTokenFailure")))
@interface GCMErrorCodeRefreshAuthTokenFailure : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)refreshAuthTokenFailure __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeRefreshAuthTokenFailure *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.RequestRateTooHigh")))
@interface GCMErrorCodeRequestRateTooHigh : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requestRateTooHigh __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeRequestRateTooHigh *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.ServerResponseError")))
@interface GCMErrorCodeServerResponseError : GCMErrorCode
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMErrorCodeServerResponseError *)doCopyValue:(int32_t)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.SessionHasExpired")))
@interface GCMErrorCodeSessionHasExpired : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sessionHasExpired __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeSessionHasExpired *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.SessionNotFound")))
@interface GCMErrorCodeSessionNotFound : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sessionNotFound __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeSessionNotFound *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.UnexpectedError")))
@interface GCMErrorCodeUnexpectedError : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unexpectedError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeUnexpectedError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.WebsocketAccessDenied")))
@interface GCMErrorCodeWebsocketAccessDenied : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)websocketAccessDenied __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeWebsocketAccessDenied *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.WebsocketError")))
@interface GCMErrorCodeWebsocketError : GCMErrorCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)websocketError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorCodeWebsocketError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorMessage")))
@interface GCMErrorMessage : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)errorMessage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMErrorMessage *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AutoRefreshTokenDisabled __attribute__((swift_name("AutoRefreshTokenDisabled")));
@property (readonly) NSString *FailedToClearConversation __attribute__((swift_name("FailedToClearConversation")));
@property (readonly) NSString *FailedToConfigureSession __attribute__((swift_name("FailedToConfigureSession")));
@property (readonly) NSString *FailedToReconnect __attribute__((swift_name("FailedToReconnect")));
@property (readonly) NSString *InternetConnectionIsOffline __attribute__((swift_name("InternetConnectionIsOffline")));
@property (readonly) NSString *NoRefreshToken __attribute__((swift_name("NoRefreshToken")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message")))
@interface GCMMessage : GCMBase
- (instancetype)initWithId:(NSString *)id direction:(GCMMessageDirection *)direction state:(GCMMessageState *)state type:(NSString *)type text:(NSString * _Nullable)text timeStamp:(GCMLong * _Nullable)timeStamp attachments:(NSDictionary<NSString *, GCMAttachment *> *)attachments events:(NSArray<GCMEvent *> *)events from:(GCMMessageParticipant *)from __attribute__((swift_name("init(id:direction:state:type:text:timeStamp:attachments:events:from:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessageDirection *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessageState *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMLong * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, GCMAttachment *> *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<GCMEvent *> *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessageParticipant *)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessage *)doCopyId:(NSString *)id direction:(GCMMessageDirection *)direction state:(GCMMessageState *)state type:(NSString *)type text:(NSString * _Nullable)text timeStamp:(GCMLong * _Nullable)timeStamp attachments:(NSDictionary<NSString *, GCMAttachment *> *)attachments events:(NSArray<GCMEvent *> *)events from:(GCMMessageParticipant *)from __attribute__((swift_name("doCopy(id:direction:state:type:text:timeStamp:attachments:events:from:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, GCMAttachment *> *attachments __attribute__((swift_name("attachments")));
@property (readonly) GCMMessageDirection *direction __attribute__((swift_name("direction")));
@property (readonly) NSArray<GCMEvent *> *events __attribute__((swift_name("events")));
@property (readonly) GCMMessageParticipant *from __attribute__((swift_name("from")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) GCMMessageState *state __attribute__((swift_name("state")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) GCMLong * _Nullable timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.Companion")))
@interface GCMMessageCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.Content")))
@interface GCMMessageContent : GCMBase
- (instancetype)initWithContentType:(GCMMessageContentType *)contentType attachment:(GCMAttachment *)attachment __attribute__((swift_name("init(contentType:attachment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMMessageContentCompanion *companion __attribute__((swift_name("companion")));
- (GCMMessageContentType *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMAttachment *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessageContent *)doCopyContentType:(GCMMessageContentType *)contentType attachment:(GCMAttachment *)attachment __attribute__((swift_name("doCopy(contentType:attachment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMAttachment *attachment __attribute__((swift_name("attachment")));
@property (readonly) GCMMessageContentType *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.ContentCompanion")))
@interface GCMMessageContentCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageContentCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol GCMKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface GCMKotlinEnum<E> : GCMBase <GCMKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.ContentType")))
@interface GCMMessageContentType : GCMKotlinEnum<GCMMessageContentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GCMMessageContentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GCMMessageContentType *attachment __attribute__((swift_name("attachment")));
+ (GCMKotlinArray<GCMMessageContentType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.ContentTypeCompanion")))
@interface GCMMessageContentTypeCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(GCMKotlinArray<id<GCMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.Direction")))
@interface GCMMessageDirection : GCMKotlinEnum<GCMMessageDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GCMMessageDirectionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GCMMessageDirection *inbound __attribute__((swift_name("inbound")));
@property (class, readonly) GCMMessageDirection *outbound __attribute__((swift_name("outbound")));
+ (GCMKotlinArray<GCMMessageDirection *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.DirectionCompanion")))
@interface GCMMessageDirectionCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageDirectionCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(GCMKotlinArray<id<GCMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.Participant")))
@interface GCMMessageParticipant : GCMBase
- (instancetype)initWithName:(NSString * _Nullable)name imageUrl:(NSString * _Nullable)imageUrl originatingEntity:(GCMMessageParticipantOriginatingEntity *)originatingEntity __attribute__((swift_name("init(name:imageUrl:originatingEntity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMMessageParticipantCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessageParticipantOriginatingEntity *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessageParticipant *)doCopyName:(NSString * _Nullable)name imageUrl:(NSString * _Nullable)imageUrl originatingEntity:(GCMMessageParticipantOriginatingEntity *)originatingEntity __attribute__((swift_name("doCopy(name:imageUrl:originatingEntity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) GCMMessageParticipantOriginatingEntity *originatingEntity __attribute__((swift_name("originatingEntity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.ParticipantCompanion")))
@interface GCMMessageParticipantCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageParticipantCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.ParticipantOriginatingEntity")))
@interface GCMMessageParticipantOriginatingEntity : GCMKotlinEnum<GCMMessageParticipantOriginatingEntity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GCMMessageParticipantOriginatingEntityCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GCMMessageParticipantOriginatingEntity *bot __attribute__((swift_name("bot")));
@property (class, readonly) GCMMessageParticipantOriginatingEntity *human __attribute__((swift_name("human")));
@property (class, readonly) GCMMessageParticipantOriginatingEntity *unknown __attribute__((swift_name("unknown")));
+ (GCMKotlinArray<GCMMessageParticipantOriginatingEntity *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.ParticipantOriginatingEntityCompanion")))
@interface GCMMessageParticipantOriginatingEntityCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageParticipantOriginatingEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(GCMKotlinArray<id<GCMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Message.State")))
@interface GCMMessageState : GCMBase
@property (class, readonly, getter=companion) GCMMessageStateCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.StateCompanion")))
@interface GCMMessageStateCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageStateCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(GCMKotlinArray<id<GCMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.StateError")))
@interface GCMMessageStateError : GCMMessageState
- (instancetype)initWithCode:(GCMErrorCode *)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (GCMErrorCode *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessageStateError *)doCopyCode:(GCMErrorCode *)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMErrorCode *code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.StateIdle")))
@interface GCMMessageStateIdle : GCMMessageState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageStateIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.StateSending")))
@interface GCMMessageStateSending : GCMMessageState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sending __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageStateSending *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.StateSent")))
@interface GCMMessageStateSent : GCMMessageState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessageStateSent *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("MessageEvent")))
@interface GCMMessageEvent : GCMBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageEvent.AttachmentUpdated")))
@interface GCMMessageEventAttachmentUpdated : GCMMessageEvent
- (instancetype)initWithAttachment:(GCMAttachment *)attachment __attribute__((swift_name("init(attachment:)"))) __attribute__((objc_designated_initializer));
@property (readonly) GCMAttachment *attachment __attribute__((swift_name("attachment")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageEvent.HistoryFetched")))
@interface GCMMessageEventHistoryFetched : GCMMessageEvent
- (instancetype)initWithMessages:(NSArray<GCMMessage *> *)messages startOfConversation:(BOOL)startOfConversation __attribute__((swift_name("init(messages:startOfConversation:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<GCMMessage *> *messages __attribute__((swift_name("messages")));
@property (readonly) BOOL startOfConversation __attribute__((swift_name("startOfConversation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageEvent.MessageInserted")))
@interface GCMMessageEventMessageInserted : GCMMessageEvent
- (instancetype)initWithMessage:(GCMMessage *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) GCMMessage *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageEvent.MessageUpdated")))
@interface GCMMessageEventMessageUpdated : GCMMessageEvent
- (instancetype)initWithMessage:(GCMMessage *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) GCMMessage *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("MessagingClient")))
@protocol GCMMessagingClient
@required

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)attachByteArray:(GCMKotlinByteArray *)byteArray fileName:(NSString *)fileName error:(NSError * _Nullable * _Nullable)error uploadProgress:(void (^ _Nullable)(GCMFloat *))uploadProgress __attribute__((swift_name("attach(byteArray:fileName:uploadProgress:)")));
- (void)authorizeAuthCode:(NSString *)authCode redirectUri:(NSString *)redirectUri codeVerifier:(NSString * _Nullable)codeVerifier __attribute__((swift_name("authorize(authCode:redirectUri:codeVerifier:)")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearConversationAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearConversation()")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)connectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("connect()")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)connectAuthenticatedSessionAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("connectAuthenticatedSession()")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)detachAttachmentId:(NSString *)attachmentId error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("detach(attachmentId:)")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)disconnectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("disconnect()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNextPageWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNextPage(completionHandler:)")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)indicateTypingAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("indicateTyping()")));
- (void)invalidateConversationCache __attribute__((swift_name("invalidateConversationCache()")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)logoutFromAuthenticatedSessionAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("logoutFromAuthenticatedSession()")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)sendHealthCheckAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("sendHealthCheck()")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)sendMessageText:(NSString *)text customAttributes:(NSDictionary<NSString *, NSString *> *)customAttributes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("sendMessage(text:customAttributes:)")));

/**
 * @note This method converts instances of IllegalStateException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)startNewChatAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("startNewChat()")));
@property (readonly) NSArray<GCMMessage *> *conversation __attribute__((swift_name("conversation")));
@property (readonly) GCMMessagingClientState *currentState __attribute__((swift_name("currentState")));
@property (readonly) id<GCMCustomAttributesStore> customAttributesStore __attribute__((swift_name("customAttributesStore")));
@property void (^ _Nullable eventListener)(GCMEvent *) __attribute__((swift_name("eventListener")));
@property void (^ _Nullable messageListener)(GCMMessageEvent *) __attribute__((swift_name("messageListener")));
@property (readonly) GCMMessage *pendingMessage __attribute__((swift_name("pendingMessage")));
@property void (^ _Nullable stateChangedListener)(GCMStateChange *) __attribute__((swift_name("stateChangedListener")));
@end

__attribute__((swift_name("MessagingClientState")))
@interface GCMMessagingClientState : GCMBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingClientState.Closed")))
@interface GCMMessagingClientStateClosed : GCMMessagingClientState
- (instancetype)initWithCode:(int32_t)code reason:(NSString *)reason __attribute__((swift_name("init(code:reason:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessagingClientStateClosed *)doCopyCode:(int32_t)code reason:(NSString *)reason __attribute__((swift_name("doCopy(code:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingClientState.Closing")))
@interface GCMMessagingClientStateClosing : GCMMessagingClientState
- (instancetype)initWithCode:(int32_t)code reason:(NSString *)reason __attribute__((swift_name("init(code:reason:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessagingClientStateClosing *)doCopyCode:(int32_t)code reason:(NSString *)reason __attribute__((swift_name("doCopy(code:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingClientState.Configured")))
@interface GCMMessagingClientStateConfigured : GCMMessagingClientState
- (instancetype)initWithConnected:(BOOL)connected newSession:(BOOL)newSession __attribute__((swift_name("init(connected:newSession:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessagingClientStateConfigured *)doCopyConnected:(BOOL)connected newSession:(BOOL)newSession __attribute__((swift_name("doCopy(connected:newSession:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL connected __attribute__((swift_name("connected")));
@property (readonly, getter=doNewSession) BOOL newSession __attribute__((swift_name("newSession")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingClientState.Connected")))
@interface GCMMessagingClientStateConnected : GCMMessagingClientState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessagingClientStateConnected *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingClientState.Connecting")))
@interface GCMMessagingClientStateConnecting : GCMMessagingClientState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connecting __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessagingClientStateConnecting *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingClientState.Error")))
@interface GCMMessagingClientStateError : GCMMessagingClientState
- (instancetype)initWithCode:(GCMErrorCode *)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (GCMErrorCode *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessagingClientStateError *)doCopyCode:(GCMErrorCode *)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMErrorCode *code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingClientState.Idle")))
@interface GCMMessagingClientStateIdle : GCMMessagingClientState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessagingClientStateIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingClientState.ReadOnly")))
@interface GCMMessagingClientStateReadOnly : GCMMessagingClientState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)readOnly __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessagingClientStateReadOnly *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingClientState.Reconnecting")))
@interface GCMMessagingClientStateReconnecting : GCMMessagingClientState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reconnecting __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessagingClientStateReconnecting *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessengerTransport")))
@interface GCMMessengerTransport : GCMBase
- (instancetype)initWithConfiguration:(GCMConfiguration *)configuration __attribute__((swift_name("init(configuration:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithConfiguration:(GCMConfiguration *)configuration tokenStore:(GCMTokenStore *)tokenStore __attribute__((swift_name("init(configuration:tokenStore:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Vault instead.")));
- (instancetype)initWithConfiguration:(GCMConfiguration *)configuration vault:(GCMVault *)vault __attribute__((swift_name("init(configuration:vault:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithConfiguration:(GCMConfiguration *)configuration tokenStore:(GCMTokenStore * _Nullable)tokenStore vault:(GCMVault *)vault __attribute__((swift_name("init(configuration:tokenStore:vault:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMMessengerTransportCompanion *companion __attribute__((swift_name("companion")));
- (id<GCMMessagingClient>)createMessagingClient __attribute__((swift_name("createMessagingClient()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchDeploymentConfigWithCompletionHandler:(void (^)(GCMDeploymentConfig * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchDeploymentConfig(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessengerTransport.Companion")))
@interface GCMMessengerTransportCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessengerTransportCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *sdkVersion __attribute__((swift_name("sdkVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateChange")))
@interface GCMStateChange : GCMBase
- (instancetype)initWithOldState:(GCMMessagingClientState *)oldState newState:(GCMMessagingClientState *)newState __attribute__((swift_name("init(oldState:newState:)"))) __attribute__((objc_designated_initializer));
- (GCMMessagingClientState *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessagingClientState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMStateChange *)doCopyOldState:(GCMMessagingClientState *)oldState newState:(GCMMessagingClientState *)newState __attribute__((swift_name("doCopy(oldState:newState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=doNewState) GCMMessagingClientState *newState __attribute__((swift_name("newState")));
@property (readonly) GCMMessagingClientState *oldState __attribute__((swift_name("oldState")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Event")))
@interface GCMEvent : GCMBase
@property (class, readonly, getter=companion) GCMEventCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.AgentTyping")))
@interface GCMEventAgentTyping : GCMEvent
- (instancetype)initWithDurationInMilliseconds:(int64_t)durationInMilliseconds __attribute__((swift_name("init(durationInMilliseconds:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMEventAgentTyping *)doCopyDurationInMilliseconds:(int64_t)durationInMilliseconds __attribute__((swift_name("doCopy(durationInMilliseconds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t durationInMilliseconds __attribute__((swift_name("durationInMilliseconds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.Authorized")))
@interface GCMEventAuthorized : GCMEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authorized __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMEventAuthorized *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.Companion")))
@interface GCMEventCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMEventCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(GCMKotlinArray<id<GCMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.ConnectionClosed")))
@interface GCMEventConnectionClosed : GCMEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connectionClosed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMEventConnectionClosed *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.ConversationAutostart")))
@interface GCMEventConversationAutostart : GCMEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conversationAutostart __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMEventConversationAutostart *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.ConversationCleared")))
@interface GCMEventConversationCleared : GCMEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conversationCleared __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMEventConversationCleared *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.ConversationDisconnect")))
@interface GCMEventConversationDisconnect : GCMEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conversationDisconnect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMEventConversationDisconnect *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.Error")))
@interface GCMEventError : GCMEvent
- (instancetype)initWithErrorCode:(GCMErrorCode *)errorCode message:(NSString * _Nullable)message correctiveAction:(GCMCorrectiveAction *)correctiveAction __attribute__((swift_name("init(errorCode:message:correctiveAction:)"))) __attribute__((objc_designated_initializer));
- (GCMErrorCode *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMCorrectiveAction *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMEventError *)doCopyErrorCode:(GCMErrorCode *)errorCode message:(NSString * _Nullable)message correctiveAction:(GCMCorrectiveAction *)correctiveAction __attribute__((swift_name("doCopy(errorCode:message:correctiveAction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMCorrectiveAction *correctiveAction __attribute__((swift_name("correctiveAction")));
@property (readonly) GCMErrorCode *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.HealthChecked")))
@interface GCMEventHealthChecked : GCMEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)healthChecked __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMEventHealthChecked *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.Logout")))
@interface GCMEventLogout : GCMEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logout __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMEventLogout *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apps")))
@interface GCMApps : GCMBase
- (instancetype)initWithConversations:(GCMConversations *)conversations __attribute__((swift_name("init(conversations:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMAppsCompanion *companion __attribute__((swift_name("companion")));
- (GCMConversations *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMApps *)doCopyConversations:(GCMConversations *)conversations __attribute__((swift_name("doCopy(conversations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMConversations *conversations __attribute__((swift_name("conversations")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apps.Companion")))
@interface GCMAppsCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMAppsCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Auth")))
@interface GCMAuth : GCMBase
- (instancetype)initWithEnabled:(BOOL)enabled __attribute__((swift_name("init(enabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMAuthCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMAuth *)doCopyEnabled:(BOOL)enabled __attribute__((swift_name("doCopy(enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Auth.Companion")))
@interface GCMAuthCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMAuthCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations")))
@interface GCMConversations : GCMBase
- (instancetype)initWithMessagingEndpoint:(NSString *)messagingEndpoint showAgentTypingIndicator:(BOOL)showAgentTypingIndicator showUserTypingIndicator:(BOOL)showUserTypingIndicator autoStart:(GCMConversationsAutoStart *)autoStart conversationDisconnect:(GCMConversationsConversationDisconnect *)conversationDisconnect conversationClear:(GCMConversationsConversationClear *)conversationClear __attribute__((swift_name("init(messagingEndpoint:showAgentTypingIndicator:showUserTypingIndicator:autoStart:conversationDisconnect:conversationClear:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMConversationsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMConversationsAutoStart *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMConversationsConversationDisconnect *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMConversationsConversationClear *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMConversations *)doCopyMessagingEndpoint:(NSString *)messagingEndpoint showAgentTypingIndicator:(BOOL)showAgentTypingIndicator showUserTypingIndicator:(BOOL)showUserTypingIndicator autoStart:(GCMConversationsAutoStart *)autoStart conversationDisconnect:(GCMConversationsConversationDisconnect *)conversationDisconnect conversationClear:(GCMConversationsConversationClear *)conversationClear __attribute__((swift_name("doCopy(messagingEndpoint:showAgentTypingIndicator:showUserTypingIndicator:autoStart:conversationDisconnect:conversationClear:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMConversationsAutoStart *autoStart __attribute__((swift_name("autoStart")));
@property (readonly) GCMConversationsConversationClear *conversationClear __attribute__((swift_name("conversationClear")));
@property (readonly) GCMConversationsConversationDisconnect *conversationDisconnect __attribute__((swift_name("conversationDisconnect")));
@property (readonly) NSString *messagingEndpoint __attribute__((swift_name("messagingEndpoint")));
@property (readonly) BOOL showAgentTypingIndicator __attribute__((swift_name("showAgentTypingIndicator")));
@property (readonly) BOOL showUserTypingIndicator __attribute__((swift_name("showUserTypingIndicator")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations.AutoStart")))
@interface GCMConversationsAutoStart : GCMBase
- (instancetype)initWithEnabled:(BOOL)enabled __attribute__((swift_name("init(enabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMConversationsAutoStartCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMConversationsAutoStart *)doCopyEnabled:(BOOL)enabled __attribute__((swift_name("doCopy(enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations.AutoStartCompanion")))
@interface GCMConversationsAutoStartCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMConversationsAutoStartCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations.Companion")))
@interface GCMConversationsCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMConversationsCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations.ConversationClear")))
@interface GCMConversationsConversationClear : GCMBase
- (instancetype)initWithEnabled:(BOOL)enabled __attribute__((swift_name("init(enabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMConversationsConversationClearCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMConversationsConversationClear *)doCopyEnabled:(BOOL)enabled __attribute__((swift_name("doCopy(enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations.ConversationClearCompanion")))
@interface GCMConversationsConversationClearCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMConversationsConversationClearCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations.ConversationDisconnect")))
@interface GCMConversationsConversationDisconnect : GCMBase
- (instancetype)initWithEnabled:(BOOL)enabled type:(GCMConversationsConversationDisconnectType *)type __attribute__((swift_name("init(enabled:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMConversationsConversationDisconnectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMConversationsConversationDisconnectType *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMConversationsConversationDisconnect *)doCopyEnabled:(BOOL)enabled type:(GCMConversationsConversationDisconnectType *)type __attribute__((swift_name("doCopy(enabled:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) GCMConversationsConversationDisconnectType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations.ConversationDisconnectCompanion")))
@interface GCMConversationsConversationDisconnectCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMConversationsConversationDisconnectCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations.ConversationDisconnectType")))
@interface GCMConversationsConversationDisconnectType : GCMKotlinEnum<GCMConversationsConversationDisconnectType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GCMConversationsConversationDisconnectTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GCMConversationsConversationDisconnectType *readonly __attribute__((swift_name("readonly")));
@property (class, readonly) GCMConversationsConversationDisconnectType *send __attribute__((swift_name("send")));
+ (GCMKotlinArray<GCMConversationsConversationDisconnectType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conversations.ConversationDisconnectTypeCompanion")))
@interface GCMConversationsConversationDisconnectTypeCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMConversationsConversationDisconnectTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(GCMKotlinArray<id<GCMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeploymentConfig")))
@interface GCMDeploymentConfig : GCMBase
- (instancetype)initWithId:(NSString *)id version:(NSString *)version languages:(NSArray<NSString *> *)languages defaultLanguage:(NSString *)defaultLanguage apiEndpoint:(NSString *)apiEndpoint messenger:(GCMMessenger *)messenger journeyEvents:(GCMJourneyEvents *)journeyEvents status:(GCMDeploymentConfigStatus *)status auth:(GCMAuth *)auth __attribute__((swift_name("init(id:version:languages:defaultLanguage:apiEndpoint:messenger:journeyEvents:status:auth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMDeploymentConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessenger *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMJourneyEvents *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMDeploymentConfigStatus *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMAuth *)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMDeploymentConfig *)doCopyId:(NSString *)id version:(NSString *)version languages:(NSArray<NSString *> *)languages defaultLanguage:(NSString *)defaultLanguage apiEndpoint:(NSString *)apiEndpoint messenger:(GCMMessenger *)messenger journeyEvents:(GCMJourneyEvents *)journeyEvents status:(GCMDeploymentConfigStatus *)status auth:(GCMAuth *)auth __attribute__((swift_name("doCopy(id:version:languages:defaultLanguage:apiEndpoint:messenger:journeyEvents:status:auth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiEndpoint __attribute__((swift_name("apiEndpoint")));
@property (readonly) GCMAuth *auth __attribute__((swift_name("auth")));
@property (readonly) NSString *defaultLanguage __attribute__((swift_name("defaultLanguage")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) GCMJourneyEvents *journeyEvents __attribute__((swift_name("journeyEvents")));
@property (readonly) NSArray<NSString *> *languages __attribute__((swift_name("languages")));
@property (readonly) GCMMessenger *messenger __attribute__((swift_name("messenger")));
@property (readonly) GCMDeploymentConfigStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeploymentConfig.Companion")))
@interface GCMDeploymentConfigCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMDeploymentConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeploymentConfig.Status")))
@interface GCMDeploymentConfigStatus : GCMKotlinEnum<GCMDeploymentConfigStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GCMDeploymentConfigStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GCMDeploymentConfigStatus *active __attribute__((swift_name("active")));
@property (class, readonly) GCMDeploymentConfigStatus *inactive __attribute__((swift_name("inactive")));
+ (GCMKotlinArray<GCMDeploymentConfigStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeploymentConfig.StatusCompanion")))
@interface GCMDeploymentConfigStatusCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMDeploymentConfigStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(GCMKotlinArray<id<GCMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileUpload")))
@interface GCMFileUpload : GCMBase
- (instancetype)initWithModes:(NSArray<GCMMode *> *)modes __attribute__((swift_name("init(modes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMFileUploadCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<GCMMode *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMFileUpload *)doCopyModes:(NSArray<GCMMode *> *)modes __attribute__((swift_name("doCopy(modes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<GCMMode *> *modes __attribute__((swift_name("modes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileUpload.Companion")))
@interface GCMFileUploadCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMFileUploadCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JourneyEvents")))
@interface GCMJourneyEvents : GCMBase
- (instancetype)initWithEnabled:(BOOL)enabled __attribute__((swift_name("init(enabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMJourneyEventsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMJourneyEvents *)doCopyEnabled:(BOOL)enabled __attribute__((swift_name("doCopy(enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JourneyEvents.Companion")))
@interface GCMJourneyEventsCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMJourneyEventsCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherButton")))
@interface GCMLauncherButton : GCMBase
- (instancetype)initWithVisibility:(NSString *)visibility __attribute__((swift_name("init(visibility:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMLauncherButtonCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMLauncherButton *)doCopyVisibility:(NSString *)visibility __attribute__((swift_name("doCopy(visibility:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *visibility __attribute__((swift_name("visibility")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherButton.Companion")))
@interface GCMLauncherButtonCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMLauncherButtonCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Messenger")))
@interface GCMMessenger : GCMBase
- (instancetype)initWithEnabled:(BOOL)enabled apps:(GCMApps *)apps styles:(GCMStyles *)styles launcherButton:(GCMLauncherButton *)launcherButton fileUpload:(GCMFileUpload *)fileUpload __attribute__((swift_name("init(enabled:apps:styles:launcherButton:fileUpload:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMMessengerCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMApps *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMStyles *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMLauncherButton *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMFileUpload *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMessenger *)doCopyEnabled:(BOOL)enabled apps:(GCMApps *)apps styles:(GCMStyles *)styles launcherButton:(GCMLauncherButton *)launcherButton fileUpload:(GCMFileUpload *)fileUpload __attribute__((swift_name("doCopy(enabled:apps:styles:launcherButton:fileUpload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMApps *apps __attribute__((swift_name("apps")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) GCMFileUpload *fileUpload __attribute__((swift_name("fileUpload")));
@property (readonly) GCMLauncherButton *launcherButton __attribute__((swift_name("launcherButton")));
@property (readonly) GCMStyles *styles __attribute__((swift_name("styles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Messenger.Companion")))
@interface GCMMessengerCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMMessengerCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mode")))
@interface GCMMode : GCMBase
- (instancetype)initWithFileTypes:(NSArray<NSString *> *)fileTypes maxFileSizeKB:(int64_t)maxFileSizeKB __attribute__((swift_name("init(fileTypes:maxFileSizeKB:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMModeCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMMode *)doCopyFileTypes:(NSArray<NSString *> *)fileTypes maxFileSizeKB:(int64_t)maxFileSizeKB __attribute__((swift_name("doCopy(fileTypes:maxFileSizeKB:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *fileTypes __attribute__((swift_name("fileTypes")));
@property (readonly) int64_t maxFileSizeKB __attribute__((swift_name("maxFileSizeKB")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mode.Companion")))
@interface GCMModeCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMModeCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Styles")))
@interface GCMStyles : GCMBase
- (instancetype)initWithPrimaryColor:(NSString *)primaryColor __attribute__((swift_name("init(primaryColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMStylesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (GCMStyles *)doCopyPrimaryColor:(NSString *)primaryColor __attribute__((swift_name("doCopy(primaryColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *primaryColor __attribute__((swift_name("primaryColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Styles.Companion")))
@interface GCMStylesCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMStylesCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformSocketKt")))
@interface GCMPlatformSocketKt : GCMBase
@property (class, readonly) int32_t DEFAULT_PING_INTERVAL_IN_SECONDS __attribute__((swift_name("DEFAULT_PING_INTERVAL_IN_SECONDS")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol GCMKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<GCMKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GCMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol GCMKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<GCMKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<GCMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol GCMKotlinx_serialization_coreKSerializer <GCMKotlinx_serialization_coreSerializationStrategy, GCMKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface GCMKotlinArray<T> : GCMBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(GCMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<GCMKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface GCMKotlinEnumCompanion : GCMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface GCMKotlinThrowable : GCMBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GCMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GCMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (GCMKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface GCMKotlinException : GCMKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GCMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GCMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface GCMKotlinRuntimeException : GCMKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GCMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GCMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface GCMKotlinIllegalStateException : GCMKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GCMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GCMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface GCMKotlinByteArray : GCMBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(GCMByte *(^)(GCMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (GCMKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol GCMKotlinx_serialization_coreEncoder
@required
- (id<GCMKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<GCMKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<GCMKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<GCMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<GCMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) GCMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol GCMKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<GCMKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GCMKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<GCMKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) GCMKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol GCMKotlinx_serialization_coreDecoder
@required
- (id<GCMKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<GCMKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (GCMKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<GCMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<GCMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) GCMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol GCMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface GCMKotlinByteIterator : GCMBase <GCMKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (GCMByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol GCMKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<GCMKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GCMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GCMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) GCMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface GCMKotlinx_serialization_coreSerializersModule : GCMBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<GCMKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GCMKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<GCMKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<GCMKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GCMKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GCMKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GCMKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GCMKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol GCMKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface GCMKotlinx_serialization_coreSerialKind : GCMBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol GCMKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<GCMKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GCMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GCMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<GCMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) GCMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface GCMKotlinNothing : GCMBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol GCMKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<GCMKotlinKClass>)kClass provider:(id<GCMKotlinx_serialization_coreKSerializer> (^)(NSArray<id<GCMKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<GCMKotlinKClass>)kClass serializer:(id<GCMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<GCMKotlinKClass>)baseClass actualClass:(id<GCMKotlinKClass>)actualClass actualSerializer:(id<GCMKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<GCMKotlinKClass>)baseClass defaultDeserializerProvider:(id<GCMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<GCMKotlinKClass>)baseClass defaultDeserializerProvider:(id<GCMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<GCMKotlinKClass>)baseClass defaultSerializerProvider:(id<GCMKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol GCMKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol GCMKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol GCMKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol GCMKotlinKClass <GCMKotlinKDeclarationContainer, GCMKotlinKAnnotatedElement, GCMKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
