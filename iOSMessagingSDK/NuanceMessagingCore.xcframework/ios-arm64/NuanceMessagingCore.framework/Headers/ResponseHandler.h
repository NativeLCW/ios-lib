//
//  ResponseHandler.h
//  NuanceMessagingCore
//
//  Created by isha.ramdasi on 12/10/22.
//  Copyright © 2022 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
static const struct AcceptableContentTypes
{
    NSString * _Nullable appjson;
    NSString * _Nullable txtjson;
    NSString * _Nullable txtjava;
    NSString * _Nullable appxml;
    NSString * _Nullable txtxml;
    NSString * _Nullable appplist;
    NSString * _Nullable imgtiff;
    NSString * _Nullable imgjpeg;
    NSString * _Nullable imggif;
    NSString * _Nullable imgpng;
    NSString * _Nullable imgico;
    NSString * _Nullable imgxicon;
    NSString * _Nullable imgbmp;
    NSString * _Nullable imgxbmp;
    NSString * _Nullable imgxbitmap;
    NSString * _Nullable imgxwinmap;
    NSString * _Nullable txthtml;
    NSString * _Nullable txtplain;
    NSString * _Nullable applicationurl;
    NSString * _Nullable appoctetstream;
} ContentTypes;

static const struct AcceptableContentTypes ContentTypes =
{
    .appjson = @"application/json",
    .txtjson = @"text/json",
    .txtjava = @"text/javascript",
    .appxml = @"application/xml",
    .txtxml = @"text/xml",
    .appplist = @"application/x-plist",
    .imgtiff = @"image/tiff",
    .imgjpeg = @"image/jpeg",
    .imggif = @"image/gif",
    .imgpng = @"image/png",
    .imgico = @"image/ico",
    .imgxicon = @"image/x-icon",
    .imgbmp = @"image/bmp",
    .imgxbmp = @"image/x-bmp",
    .imgxbitmap = @"image/x-xbitmap",
    .imgxwinmap = @"image/x-win-bitmap",
    .txthtml = @"text/html",
    .txtplain = @"text/plain",
    .applicationurl = @"application/x-www-form-urlencoded",
    .appoctetstream = @"application/octet-stream",
};

@interface ResponseHandler : NSHTTPURLResponse
+ (instancetype _Nonnull )respSerializer;
@property (nonatomic, copy, nullable) NSSet <NSString *> *acceptableContentTypes;
@property (nonatomic, copy, nullable) NSIndexSet *acceptableStatusCodes;
- (BOOL)validateResponse:(NSHTTPURLResponse *_Nonnull)response
                    data:(NSData *_Nonnull)data
                   error:(NSError * _Nonnull __autoreleasing *_Nonnull)error;
@end

