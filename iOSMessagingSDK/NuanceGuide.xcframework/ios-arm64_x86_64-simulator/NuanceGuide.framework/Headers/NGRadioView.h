//
//  NGRadioView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NGRadioView;
@protocol NGRadioViewDelegate <NSObject>

- (void)radioViewDidClick:(NGRadioView *)radioView selectIndex:(NSInteger)selectIndex;

@end

@interface NGRadioView : UIView

@property (nonatomic, strong) NSArray *itemList;
@property (nonatomic, weak) id<NGRadioViewDelegate> delegate;
@property (nonatomic, nonnull, copy) NSString *buttonLayout;
@property (nonatomic, nonnull, copy) NSString *layout;
@property (nonatomic) int selectedRadioIndex;
@property (nonatomic) BOOL containsItems;

- (instancetype)initWithItemList:(NSArray *)itemList;
- (void)setSelectedIndex:(NSInteger)selectedIndex;
-(void) displayErrorView;
-(void) removeErrorView:(NSInteger) index;
@end
