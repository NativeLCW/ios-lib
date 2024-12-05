//
//  NGGuideStyleBase.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"

@interface NGGuideStyleBase : NGBaseData

@property (nonatomic, strong) NSNumber *paddingTop;
@property (nonatomic, strong) NSNumber *paddingLeft;
@property (nonatomic, strong) NSNumber *paddingBottom;
@property (nonatomic, strong) NSNumber *paddingRight;

@property (nonatomic, strong) NSNumber *marginTop;
@property (nonatomic, strong) NSNumber *marginLeft;
@property (nonatomic, strong) NSNumber *marginBottom;
@property (nonatomic, strong) NSNumber *marginRight;

@property (nonatomic, strong) NSNumber *radius;
@property (nonatomic, copy) NSString *background;

@property (nonatomic, strong) NSNumber *textSize;
@property (nonatomic, copy) NSString *textStyle;
@property (nonatomic, copy) NSString *textColor;

// button
@property (nonatomic, copy) NSString *disableTextColor;
@property (nonatomic, copy) NSString *hightedTextColor;

// radio, checkbox
@property (nonatomic, copy) NSString *unselectImg;
@property (nonatomic, copy) NSString *selectedImg;

// border line
@property (nonatomic, copy) NSNumber *borderWidth;
@property (nonatomic, copy) NSString *borderColor;

@property (nonatomic, copy) NSString *alignment;

@end
