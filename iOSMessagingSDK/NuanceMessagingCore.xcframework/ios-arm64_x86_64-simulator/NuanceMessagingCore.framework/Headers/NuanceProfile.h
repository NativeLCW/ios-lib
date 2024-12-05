//
//  Profile.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/12/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConversionsContainer.h"
#import "EngagementsContainer.h"
#import "GenInfo.h"
#import "VisitsContainer.h"

@interface NuanceProfile : NSObject
    
    @property (nonatomic, strong) ConversionsContainer * conversionsContainer;
    @property (nonatomic, strong) EngagementsContainer * engagementsContainer;
    @property (nonatomic, strong) GenInfo * genInfo;
    @property (nonatomic, strong) NSMutableArray * keyObject;
    @property (nonatomic, strong) NSString * siteID;
    @property (nonatomic, strong) VisitsContainer * visitsContainer;
-(instancetype)initDefault;
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    
@end
