//
//  NGGuidePageProtocols.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#ifndef NGGuidePageProtocols_h
#define NGGuidePageProtocols_h

@class NGEngageEventData;

@protocol NGGuideOutputDelegate <NSObject>

- (void)guideOutputEngage:(NGEngageEventData *)engage outputText:(NSString *)outputText;

@end

@protocol NGGuideApiBackDelegate <NSObject>

- (void)guideApiBack:(NSString *)state engage:(NGEngageEventData *)engage;

@end

#endif /* NGGuidePageProtocols_h */
