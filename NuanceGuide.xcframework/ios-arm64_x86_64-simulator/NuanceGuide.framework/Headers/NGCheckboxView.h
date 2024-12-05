//
//  NGCheckboxView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NGCheckboxView;
@protocol NGCheckBoxViewDelegate <NSObject>

- (void)checkBoxViewDidClick:(NGCheckboxView *)checkBoxView clickIndex:(NSUInteger)index;

@end

@interface NGCheckboxView : UIView

@property (nonatomic, strong) NSArray *itemList;
@property (nonatomic, weak) id<NGCheckBoxViewDelegate> delegate;

- (instancetype)initWithItemList:(NSArray *)itemList;
-(void) displayErrorView;
-(void) removeErrorView:(NSInteger) index;
@end
