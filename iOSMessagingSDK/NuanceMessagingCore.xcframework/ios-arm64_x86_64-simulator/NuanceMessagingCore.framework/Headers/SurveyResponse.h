//
//  SurveyResponse.h
//  IOS MVP
//
//  Created by mithun on 9/27/17.
//  Copyright © 2017 nuance. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Response.h"

@interface SurveyResponse : Response {
    NSString *_surveyUrl;
    NSString *_surveyLaunchData;
}

@property(nonatomic, copy) NSString *surveyUrl;
@property(nonatomic, copy) NSString *surveyLaunchData;

@end
