//
//  NGHandlerProtocol.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#ifndef NGHandlerProtocol_h
#define NGHandlerProtocol_h
#import "NGWidgetBaseData.h"

@protocol NGTransitionProtocol <NSObject>

@required
- (void)viewNeedChange:(NSString *)toView output:(NSString *)output;
- (void)viewChangeError:(NSString *)errorText;
- (void)endEvent;
- (void)cancelEvent;
- (void)resetEvent;
- (void)forceDisable;
@end

@protocol NGTransitionErrorProtocol <NSObject>

@optional
- (void)viewDisplayError:(NGWidgetBaseData*) baseData errorString:(NSString*)errorString timeStamp:(NSNumber*) timeStamp;
@end

@protocol NGVisiblityProtocol <NSObject>

@required
- (void)updateVisibilityByTrigger:(NSString *)trigger;

@end

@protocol NGEnableProtocol <NSObject>

@required
- (void)updateEnableState:(BOOL)state;

@end


#endif /* NGHandlerProtocol_h */
