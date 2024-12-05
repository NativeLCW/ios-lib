//
//  EngageStatusResponse.h
//  IOS MVP
//
//  Created by mithun on 9/25/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Response.h"

@interface EngageStatusResponse : Response {
    NSString *_status;
}

@property(nonatomic, copy) NSString *status;

@end
