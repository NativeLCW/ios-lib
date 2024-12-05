//
//  PostRequest.h
//  IOS MVP
//
//  Created by mithun on 9/22/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PostRequest : NSObject {
    
}
- (void)sendPostRequest:(NSString *)url_str andPostBody:(NSDictionary *)vars;
- (void)sendTokenRequest:(NSString *)url_str andPostBody:(NSDictionary *)vars;
- (void)sendPostRequest:(NSString *)url_str andPostBody:(NSDictionary *)vars andQueryParams:(NSDictionary *)qps;
- (void)sendPostRequest:(NSString *)url_str andPostBody:(NSDictionary *)vars andQueryParams:(NSDictionary *)qps andBodyType:(NSString*)type;

- (void)addHeader:(NSMutableURLRequest*) request;

- (void)successListener:(NSDictionary*) respData;
- (void)errorListener:(long) httpStatus;



@end
