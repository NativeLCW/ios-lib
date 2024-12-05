//
//  FetchJsonBR.h
//  NuanceMessagingCore
//
//  Created by mithun on 2/1/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GetRequest.h"
#import "Response.h"
#import "Rules.h"


@interface FetchJsonBR: GetRequest {
    
}

@property(nonatomic, copy) void (^completionhandler)(Response* success, Response *error);
-(void)getRules:(void (^)(Response* success, Response *error))completionBlock;
-(Rules*)getBRRules;
-(id)getConstant:(NSString*)name;
@end
