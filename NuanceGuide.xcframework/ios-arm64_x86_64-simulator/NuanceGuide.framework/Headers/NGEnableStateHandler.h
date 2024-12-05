//
//  NGEnableStateHandler.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGBaseWidgetView.h"
#import "NGHandlerProtocol.h"

@interface NGEnableStateHandler : NSObject

//+ (NGEnableStateHandler *)sharedInstance;

- (void)regist:(NGBaseWidgetView *)registedView;
- (void)clear;

@end
