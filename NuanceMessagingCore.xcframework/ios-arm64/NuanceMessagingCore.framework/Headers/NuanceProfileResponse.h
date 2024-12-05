//
//  ProfileResponse.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import "Response.h"
#import "NuanceProfile.h"
@interface NuanceProfileResponse : Response {
   
}
    
@property(nonatomic, strong) NuanceProfile *profile;


@end
