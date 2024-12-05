//
//  MessagingData.h
//  IOS MVP
//
//  Created by mithun on 9/25/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MessagingData : NSObject {
    
}
+(void) saveCustomerID:(NSString*)customerID;

+(NSString*) getCustomerID;

+(void) saveEngagemtID:(NSString*)engID;

+(NSString*) getEngagementID;

+(void) saveChatProgress:(BOOL)progress;

+(BOOL) getChatProgress;

+(void) saveAgentID:(NSString*)agentid;

+(NSString*) getAgentID;

+(void) saveAgentGroupID:(NSString*)agentgid;

+(NSString*) getAgentGroupID;

+(void) saveSiteID:(NSString*)siteid;

+(NSString*) getSiteID;

+(void) customKey:(NSString*)key andValue:(NSString*) value;

+(NSString*) getCustomKey:(NSString*) key;

+(void) setInitialCustID:(NSString*)custID;
+(NSString*) getInitialCustID;

+(NSMutableDictionary*) getCustomNinaVars:(BOOL)reset;

@end
