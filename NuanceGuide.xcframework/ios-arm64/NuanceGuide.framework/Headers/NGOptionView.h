//
//  NGOptionView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NGOptionView;
@protocol NGOptionViewDelegate <NSObject>

- (void)optionViewClicked:(NGOptionView *)optionView;

@end

@interface NGOptionView : UIView

@property (nonatomic, strong) UILabel *textLab;
@property (nonatomic, strong) UIImage *unselectImg;
@property (nonatomic, strong) UIImage *selectedImg;
@property (nonatomic, strong) UIImage *errorImg;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, assign) BOOL isChecked;
@property (nonatomic, weak) id<NGOptionViewDelegate> delegate;
@property (nonatomic, strong) NSString *buttonLayout;
@property (nonatomic, nonnull, strong) NSString *layout;

@end
