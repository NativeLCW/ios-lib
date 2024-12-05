//
//  GetMessageResponse.h
//  IOS MVP
//
//  Created by mithun on 9/27/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import "Response.h"
#import "MessageTypes.h"

@interface GetMessageResponse : Response {
    NSString *_messageType;
    NSMutableDictionary *additionalProperties;
}

@property(nonatomic) NSString *messageType;
@property(nonatomic, assign) BOOL isLastMsg;
@property (nonatomic, assign) BOOL isActive;

- (NSDictionary*) getAllAdditionalProperties;
- (void) addAdditionalProperty:(NSString*) name andValue:(id)value;
- (NSString*) getProperty:(NSString *)name;
- (NSDictionary*) getDicProperty:(NSString *)name;

@end



