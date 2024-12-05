//
//  RequestUtil.h
//  IOS MVP
//
//  Created by mithun on 9/22/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MessageTypes.h"

@interface RequestUtil : NSObject {
    
}
+(NSString*) urlEncode:(NSString *)input;

+ (NSURL *)ars_queryWithString:(NSString *)URL queryElements:(NSDictionary<NSString *,NSString *> *)queryElements;

+ (NSString *)messageTypeToString:(MessageType)enumVal;
@end
