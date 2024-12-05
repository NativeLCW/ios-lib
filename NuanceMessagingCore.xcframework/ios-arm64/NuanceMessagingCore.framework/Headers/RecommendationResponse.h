//
//  RecommendationResponse.h
//  NuanceMessagingCore
//
//  Created by mithun on 2/6/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import "Response.h"

@interface RecommendationResponse : Response {
    
}

@property(nonatomic, strong) NSDictionary *datum;
@property(nonatomic, strong) NSString *name;

@end
