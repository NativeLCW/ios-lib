//
//  NGVisiblityHandler.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NGHandlerProtocol.h"

@interface NGVisiblityHandler : NSObject

+ (NGVisiblityHandler *)sharedInstance;
- (void)regist:(UIView<NGVisiblityProtocol> *)registedView;
- (void)clear;

@end
