//
//  NGTransitionHandler.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGHandlerProtocol.h"
#import "NGBaseWidgetView.h"
#import "NGGuideInfoData.h"

@class NGGuideView;
@class NGGuideRender;

@interface NGTransitionHandler : NSObject

@property (nonatomic, weak) NGGuideView<NGTransitionProtocol> *listener;
@property (nonatomic,weak) NGGuideView <NGTransitionErrorProtocol> *viewListener;
@property (nonatomic) NGGuideRender *guideRender;
//+ (NGTransitionHandler *)sharedInstance;
- (void)clear;

@end
