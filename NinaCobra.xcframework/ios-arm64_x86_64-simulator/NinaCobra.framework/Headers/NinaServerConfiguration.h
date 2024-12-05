//
//  Session.h
//  NinaCobraApi
//
//  Created by Vishal Gaikwad on 05/04/18.
//  Copyright © 2018 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UtilClass.h"

@interface NinaServerConfiguration : NSObject

@property (nonatomic) NSString *applicationKey;
@property (nonatomic) NSString *verificationCode;
@property (nonatomic) NSString *authenticationType;
@property (nonatomic) NSString *authenticationdata;

@property (nonatomic) NSString *gateWayScheme;
@property (nonatomic) NSString *gateWayAddress;
@property (nonatomic) NSString *gateWayPort;
@property (nonatomic) NSString *gateWayPath;

@property (nonatomic) NSString *ninaInitialMessage;
@property (nonatomic) NSString *ninaCloudUrl;

/*!
     @brief
        This method is used to get the url session to connect nina cloud.
     @discussion
        This method is used to get the url session to connect nina cloud.
 */

-(NSString*) getServerUrl;

@end
