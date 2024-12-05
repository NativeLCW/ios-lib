//
//  Response.h
//  IOS MVP
//
//  Created by mithun on 9/22/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Response: NSObject {
    long _statusCode;
    NSDictionary *_rawDict;
}
@property(nonatomic) long statusCode;
@property(nonatomic) NSDictionary *rawDict;
@end

