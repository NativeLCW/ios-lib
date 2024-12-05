//
//  NGNodeView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NGUtil.h"
#import "NGNodeData.h"
#import "NGFormControlView.h"
#import "NGGuideRender.h"

@interface NGNodeView : UIView
//UI
@property (nonatomic, strong) UIStackView           *containerView;
@property (nonatomic, strong) NSMutableArray        *formControlViews;
//Data
@property (nonatomic, strong) NGNodeData            *nodeData;
@property (nonatomic, strong) NGGuideRender          *guideRender;

- (id)initWithNodeData:(NGNodeData *)nodeData withRenderObejct:(NGGuideRender*) guideRender;
- (void)reset;

- (void)forceDisable;

@end
