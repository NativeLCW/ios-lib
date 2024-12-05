//
//  GetRequest.h
//  IOS MVP
//
//  Created by mithun on 9/25/17.
//  Copyright © 2017 nuance. All rights reserved.
//
#import <Foundation/Foundation.h>




@interface GetRequest:NSObject {
    NSURLSessionDataTask *task;
}

- (void)makeGetRequest:(NSString *)url_str andQueryParams:(NSDictionary *)vars;
- (void)makeGetRequest:(NSString *)url_str andQueryParams:(NSDictionary *)vars andReturnAsData:(BOOL) returnAsData;

- (void)makeGetRequest:(NSString *)url_str andQueryParams:(NSDictionary *)vars andReturnAsData:(BOOL) returnAsData andNoToken:(BOOL)noToken;
- (void)addHeader:(NSMutableURLRequest*) request;

-(void) successListenerWithData:(NSData *)respData;
- (void)successListener:(NSDictionary*) respData;
- (void)errorListener:(long) httpStatus;

- (void)cancelTask;

@end
