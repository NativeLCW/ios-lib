//
//  NGCardWidgetView.h
//  Pri-chat-Demo
//
//  Created by Vishal Gaikwad on 01/09/19.
//  Copyright © 2019 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGBaseWidgetView.h"

@class NGCardWidgetView;
@protocol NGCardWidgetViewDelegate <NSObject>

- (void)unselectPreviousSelectedCard:(NSInteger)index;

@end

@interface NGCardWidgetView : NGBaseWidgetView
@property (nonatomic) NGWidgetType parentType;
@property (nonatomic, strong) UIImageView *imageVw;
@property (nonatomic, strong) UIStackView *verticalStackView;
-(void) setData :(NGWidgetBaseData *)widgetData;
-(void)unselectSelectedCard;
@property (nonatomic, weak) id<NGCardWidgetViewDelegate> delegate;
-(void)isFromCardDeck:(BOOL)cardDeck;
- (void)setupWithWidgetData:(NGWidgetBaseData *)widgetData;
@end

