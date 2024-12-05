//
//  CustomVariable.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface CustomVariable : NSObject
    
    @property (nonatomic, assign) NSInteger lastUpdatedDate;
    @property (nonatomic, strong) NSString * name;
    @property (nonatomic, strong) NSString * persistence;
    @property (nonatomic, strong) NSString * value;
    
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
