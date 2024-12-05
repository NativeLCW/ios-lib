//
//  DataPassBuilder.h
//  IOS MVP
//
//  Created by mithun on 9/26/17.
//  Copyright © 2017 nuance. All rights reserved.
//


#import <Foundation/Foundation.h>

@class DataPassBuilder;
typedef void(^DataPassBuilderBlock)(DataPassBuilder *builder);

@class DataPassAPI;

@interface DataPassBuilder : NSObject {
    NSMutableDictionary *dpDictionary;
    NSString *autodp;
}

- (void) add:(NSString*) key andValue:(NSString*)value;
- (void) autoDataPass:(NSString*)value;
@property(nonatomic, copy) NSMutableDictionary *dataPassDict;
@property(nonatomic, copy) NSString *vaDataPass;
- (DataPassAPI*) build;
@end
