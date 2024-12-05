//
//  WebCallMessage.h
//  NuanceMessagingCore
//
//  Created by Vishal Gaikwad on 26/07/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PostRequest.h"
#import "Response.h"

@interface WebCallMessage : PostRequest {
    
}

-(void) sendCallEndMessage:(NSString*) message action:(NSString*) action;
-(void) sendCallMessage:(NSString*) message action:(NSString*) action;

@end

