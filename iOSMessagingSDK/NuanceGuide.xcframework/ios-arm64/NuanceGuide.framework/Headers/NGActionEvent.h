//
//  CustomActionEvent.h
//  NuanceGuide
//
//  Created by mithun chackankulam on 8/26/19.
//  Copyright © 2019 Zhou, Zhi Ming(Zhiming). All rights reserved.
//

#import "NGBaseData.h"


@interface NGActionEvent : NGBaseData

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableDictionary *params;

@end
