//
//  RequestHandler.h
//  NuanceMessagingCore
//
//  Created by isha.ramdasi on 12/10/22.
//  Copyright © 2022 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>


static const NSString * GETMethod = @"GET";
static const NSString * POSTMethod = @"POST";
static const NSString * CntntType = @"Content-Type";


@interface RequestHandler : NSMutableURLRequest

+ (instancetype _Nonnull )serializer;
- (NSMutableURLRequest *_Nonnull)requestWithMethod:(NSString *_Nonnull)method
                                 URLString:(NSString *_Nonnull)URLString
                                parameters:(NSDictionary *_Nullable )parameters
                                   headers:(NSDictionary *_Nullable)headers
                                     error:(NSError * _Nonnull __autoreleasing *_Nonnull)error;

- (NSMutableURLRequest *_Nonnull)requestWithMultipartURL:(NSString *_Nonnull)URLString;

- (NSData *_Nonnull)createBodyWithParameters:(NSDictionary *_Nonnull)parameters
                             fileName:(NSString *_Nonnull)fileName
                         fieldName:(NSString *_Nonnull)fieldName
                       fileContent:(NSData *_Nonnull)fileContent;


@end

