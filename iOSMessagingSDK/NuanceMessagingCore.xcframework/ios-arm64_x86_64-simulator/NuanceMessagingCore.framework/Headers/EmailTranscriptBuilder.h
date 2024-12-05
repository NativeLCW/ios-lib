//
//  EmailTranscriptBuilder.h
//  IOS MVP
//
//  Created by mithun on 9/27/17.
//  Copyright © 2017 nuance. All rights reserved.
//
#import <Foundation/Foundation.h>


@class EmailTranscriptBuilder;
typedef void(^EmailTranscriptBuilderBlock)(EmailTranscriptBuilder *builder);

@class EmailTranscriptAPI;


@interface EmailTranscriptBuilder : NSObject{
    NSString *_customerName;
    NSString *_emailAddress;
    NSString *_emailSpecID;
}

@property(nonatomic, copy) NSString *customerName;
@property(nonatomic, copy) NSString *emailAddress;
@property(nonatomic, copy) NSString *emailSpecID;

- (EmailTranscriptAPI*) build;

@end
