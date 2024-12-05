//
//  SurveyURLAPI.h
//  IOS MVP
//
//  Created by mithun on 9/27/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import "GetRequest.h"
#import "SurveyResponse.h"
#import "NuanMessaging.h"

@interface SurveyURLAPI : GetRequest {
    
}

@property(nonatomic, copy) void (^completionhandler)(SurveyResponse* success, Response *error);
- (void) getSurveyData:(void (^)(SurveyResponse* success, Response *error))completionBlock;


@end
