//
//  NuanceProfileManager.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NuanceProfileResponse.h"



@class DataCollectionEvent;
@class ConversionEvent;
@class Engagement;
enum DCSyncInterval
{
    SYNC_NOW,
    SYNC_FIVE_SECONDS,
    SYNC_TEN_SECONDS,
    SYNC_THIRTY_SECONDS
};

@interface NuanceProfileManager: NSObject
    
    @property (nonatomic, strong) NSDictionary *uniqueIDs;
    @property (nonatomic, strong) NSString *sessionID;
    + (NuanceProfileManager *) getInstance;
   
    -(void)addUniqueCustomerID:(NSString*)type andValue:(NSString*)value;
    -(void)startSession:(NSString*)siteID andApplicationID:(NSString*)appID andInterval:(enum DCSyncInterval)interval andCompletionHandler:(void (^)(NuanceProfileResponse* success, Response *error))completionBlock;
    
    -(void)sendCustomEvent:(DataCollectionEvent*)customEvent;
    -(void)sendConversionEvent:(ConversionEvent*)conversionEvent;
    @property(nonatomic, copy) void (^brReadyHandler)(Response* success, Response *error);
    -(void)setBRReadyListener:(void (^)(Response* success, Response *error))completionBlock;
    
    -(NuanceProfile*)getProfile;
    -(void) setProfileID:(NSString*)profileId;
    -(NSString*)getProfileID;
    -(id) getProfileField:(NSString*) path;
    -(Engagement*)getEngagementFromProfile;

@end
