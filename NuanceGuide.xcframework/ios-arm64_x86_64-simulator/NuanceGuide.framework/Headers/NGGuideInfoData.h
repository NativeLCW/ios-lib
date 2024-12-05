//
//  NGGuideInfoData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"


@interface NGGuideInfoData : NGBaseData

@property (nonatomic, copy) NSString *automatonName;
@property (nonatomic, copy) NSString *automatonId;
@property (nonatomic, copy) NSString *automatonType;
@property (nonatomic, copy) NSString *initialState;
@property (nonatomic, copy) NSString *widgetType;
@property (nonatomic, copy) NSString *widgetView;
@property (nonatomic, copy) NSString *widgetAction;
@property (nonatomic) BOOL customerAction;
@property (nonatomic) BOOL showMessageText;
@property (nonatomic) BOOL showMessageTextInRestore;
@property (nonatomic) BOOL displayInRestore;
@property (nonatomic) BOOL lockView;
@property (nonatomic) BOOL historicLockView;
@property (nonatomic) BOOL historicHidden;
@property (nonatomic, strong) NSArray *constants;
@property (nonatomic, strong) NSArray *nodes;
@property (nonatomic, strong) NSArray *transitions;
@property (nonatomic) BOOL isReloadingRichWidget;
@property (nonatomic) NSString *row;
@property (nonatomic) BOOL isRestoring;
@end
