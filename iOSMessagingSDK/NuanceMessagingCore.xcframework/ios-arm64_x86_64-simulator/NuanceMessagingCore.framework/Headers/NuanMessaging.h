//
//  NuanMessaging.h
//  IOS MVP
//
//  Created by mithun on 9/21/17.
//  Copyright © 2017 nuance. All rights reserved.
//

// Acting as umbrella header
#import "AsyncTranscriptAPI.h"
#import "MessagingData.h"
#import "RequestUtil.h"
#import "NuanceProfileManager.h"
#import "DCCustomVariable.h"
#import "DataCollectionEvent.h"
#import "ConversionEvent.h"
#import "TokenAuthorizationService.h"
#import "CustomerMessageAPI.h"
#import "CloseMessagingAPI.h"
#import "CustomerTypingAPI.h"
#import "Response.h"
#import "MessagingAPI.h"
#import "AgentStatusAPI.h"
#import "DataPassAPI.h"
#import "EmailTranscriptAPI.h"
#import "SurveyURLAPI.h"
#import "GetMessageAPI.h"
#import "RecommendationResponse.h"
#import "FileUpload.h"
#import "AssistedEventAPI.h"
#import "AgentHiddenMessageHandler.h"
#import "CustomerHiddenMessageHandler.h"

@class GetMessageAPI;
@class BREngine;
@interface NuanMessaging : NSObject {
    NSString *_dataCenter;
    NSString *_siteID;
    NSString *_customerID;
    NSString *_engagementID;
    NSString *_fcmToken;
    NSString *_deviceType;
    NSString *_tagServerName;
    
    NSString *_agentID;
    NSString *_agentGroupID;
    NSString *_businessUnitID;
    
    
    TokenAuthorizationService *_tokenService;
    CustomerMessagAPI *customerMessageAPI;
    CloseMessagingAPI *closeMessaging;
    CustomerTypingAPI *customerTyping;
    FileUpload *fileUploader;
    NSString *_url;
   
    BOOL pendingEngageRequest;
    NSMutableArray *pendingEngageMessages;
    
    BOOL chatProgressState;
    
    BOOL isVA;
   
    NSMutableDictionary *storedDP;
    NSString *_sUrl;
    
    GetMessageAPI *getMessageAPI;
    NSInteger timeout;
    BREngine *targettingengine;
    MessagingAPI *engageMessaging;
    
    NSString *appversion;
    NSDictionary *ninavars;
    BOOL reset;
    NSString *inputType;
    NSMutableDictionary *uniqueIds;
    
    NSString *authDomain;
    NSString *apiDomain;
    NSString *fileDomain;
    NSString *tagDomain;
    
}
@property(nonatomic) TokenAuthorizationService *tokenService;
@property(nonatomic) NSString *siteID;
@property(nonatomic) NSString *customerID;
@property(nonatomic) NSString *engagementID;
@property(nonatomic) NSString *agentID;
@property(nonatomic) NSString *tagServerName;
@property(nonatomic) NSString *DCAPISessionID;
@property(nonatomic) NSString *agentGroupID;
@property(nonatomic) NSString *businessUnitID;
@property(nonatomic) NSString *fcmToken;
@property(nonatomic) NSString *deviceType;
@property(nonatomic) NSString *surveyUrl;


- (AgentHiddenMessageHandler *)getAgentHiddenMessageHandler;
- (CustomerHiddenMessageHandler *)getCustomerHiddenMessageHandler;

- (void) initialize:(NSString *)dataCenter andClientID:(NSString *)clientID andClientSecret:(NSString *)clientSecret;
- (void) initialize:(NSString *)dataCenter andClientID:(NSString *)clientID andClientSecret:(NSString *)clientSecret andTagServerName:(NSString *)tagServerName;
- (void) initialize:(NSString *)dataCenter andClientID:(NSString *)clientID andClientSecret:(NSString *)clientSecret andTagServerName:(NSString *)tagServerName andFCMToken:(NSString*)fcmToken;

- (void) generateAccessToken:(void (^)(Response* success, Response *error))completionBlock;
- (NSString*) getAPIhost;
- (NSString*) getAuthhost;
- (NSString*) getAccessToken;
- (void)setChatProgress:(BOOL) inProgress;
- (BOOL)getChatProgress;

+ (void) setMessagingData:(NSString *) key andValue:(NSString*) value;
+ (NSString*) getCustomData:(NSString *) key;
+ (NuanMessaging *) getInstance;
+ (BOOL) isDcAllowed:(NSString *)dataCenter;
+ (NSString*) getVersion;
+ (NSString *)getQAVersion;
+ (NSString*) getBuildTIme;
- (void)noEngagementException;

- (void)sendNinaCustomerMessage:(NSString *)message attributes:(NSDictionary*)attributes;
- (void)sendInfoMessage:(NSString*) message;
- (void)sendInfoMessage:(NSString*) message andCompletion:(void (^)(Response *, Response *))completionBlock;
- (void)sendCustomerMessage:(NSString*) message;
- (void)sendCustomerMessage:(NSString*) message andCompletion:(void (^)(Response *, Response *))completionBlock;
- (void)sendRichMessage:(NSString*) message andData:(NSString*)data;
- (void)sendSystemMessage:(NSString*)message;
- (void)sendActivityMessage:(NSString*)activity;
- (void)endEngagement;
- (void)endEngagement:(void (^)(Response *, Response *))completionBlock;
- (void)sendCustomerTypingStatus:(BOOL) isTyping;

- (void)pendingEngagerequest:(BOOL)status;
- (BOOL)getPendingEngagerequest;
- (void)setPendingEngageMessages:(NSString*) value;
- (void)setFCMToken:(NSString *)fcmToken;
- (NSString*)getFCMToken;
- (void)setDeviceType:(NSString *)deviceType;
- (NSString*)getDeviceType;

- (NSString*)getWKWebViewInterfaceName;
- (void) handleWebviewRequest:(NSString *)body andNewEngagementHandler:(void (^)(NSDictionary *param, NSDictionary *datapass))completionBlock andEvaluateJSHandler:(void (^)(NSString *jsstring))jsBlock andPendingMsgHandler:(void (^)(NSInteger c2cidx))hasPendingMsg;
    
- (BOOL)isBRReady;
-(void)setBRReadyListener:(void (^)(Response* success, Response *error))completionBlock;

-(GetMessageAPI*) getMessageAPIInstance;

-(FileUpload *) getFileUploadAPIInstance;

-(NSString*)getTagServerUrl;

-(void)setEngagementTimeoutInSeconds:(NSInteger)timeoutSeconds;

-(BREngine*)getTargettingEngine;
-(void) getRecommendation:(NSString*)eventName andEventData:(NSDictionary<NSString*,id>*)eventData;
-(void) setRecommendationListener:(void (^)(RecommendationResponse* recommendation))completionBlock;

-(NSString *)getSSVPURL;
-(NSString *)getFileUploadURL;
-(void)setAppVersion:(NSString *)version;

-(MessagingAPI*)getEngageAPIInstance;

- (BOOL)isCallInProgress;

- (void) closeOnTerminate;

- (void) setNinaVars:(NSDictionary*)vars andReset:(BOOL)reset;
- (void) setInputType:(NSString*)type;
- (NSString*)getInputType;
- (NSDictionary*)getNinaVars;
-(BOOL) resetNinaVars;

- (void) setIsVA:(BOOL)va;
- (BOOL) isVA;
- (void) setIsMixServer:(BOOL)isMIX;
- (BOOL) isMixServer;
- (void) setSendResolveCommand:(BOOL)sendResolveCommand;

- (void)addUniqueCustomerID:(NSString *)type andValue:(NSString *)value;

- (NSDictionary*) getUniqueIDS;

- (void) overrideAuthDomain:(NSString*)domain;
- (void) overrideAPIDomain:(NSString*)domain;
- (void) overrideFileUploadDomain:(NSString*)domain;
- (void) overrideTagDomain:(NSString *)domain;

- (NSString *) invokeEngagementFromWebView:(NSInteger)c2cidx;
@end

