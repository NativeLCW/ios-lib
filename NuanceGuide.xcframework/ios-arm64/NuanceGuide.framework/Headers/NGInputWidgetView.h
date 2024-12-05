//
//  NGInputWidgetView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseWidgetView.h"
#import "NGTransitionHandler.h"

@protocol  NGInputWidgetViewDelegate
- (void)textFieldEndEditing:(NSString*)text indexValue:(int) indexValue;
- (void)textFieldTextChange:(NSString *)text indexValue:(int) indexValue;
- (void)textFieldReturn:(NSString *)text indexValue:(int) indexValue;
@end

@interface NGInputWidgetView : NGBaseWidgetView

@property (nonatomic,assign) id <NGInputWidgetViewDelegate> delegate;
@property (nonatomic) int shortInputIndexValue;

-(void) setEdgeInset:(UIEdgeInsets)value;
-(void) showErrorView:(NSString*) errorString;
-(void) displayPlaceHolder:(NSString*)string;
-(void) removeErrorView;
-(void) setContextForView:(NSDictionary*) context;
-(void) setControlContextForView:(NSDictionary*) context;
@end
