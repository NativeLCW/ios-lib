//
//  NGButtonWidgetView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseWidgetView.h"

@protocol NGButtonWidgetViewDelegate <NSObject>
-(void) setCollectionHeight:(float)collectionHeight;
@optional
-(void) setButtonHeight:(float)buttonHeight withView:(id) view;
@end


@interface NGButtonWidgetView : NGBaseWidgetView

@property (nonatomic, copy) NSString *style;
@property (nonatomic) BOOL isSizeLarge;
@property (nonatomic) id <NGButtonWidgetViewDelegate> delegate;
@property (nonatomic) CGFloat heightOfCollection;
@property (nonatomic,strong) UICollectionView *collectionView;
@property (nonatomic) CGFloat widthOfCollection;

-(void) setButtons:(NSArray*) array;
-(void) setCollectionViewLayoutAsFlow;
-(void) setContainerSizeForView:(NSInteger)containerSize;
-(void) setWidgetContext:(NSDictionary*) context;
-(void) setButtonRadiusToZero;
-(void) setBottomLayerToView :(UIColor*) backGroundColor value:(int) value;
-(void) setRightLayerToView :(UIColor*) backGroundColor;
@end

