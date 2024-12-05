//
//  NGQuickReplyWidgetView.h
//  Pri-chat-Demo
//
//  Created by Vishal Gaikwad on 30/08/19.
//  Copyright © 2019 Vishal Gaikwad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NGBaseWidgetView.h"


@interface NGQuickReplyWidgetView : NGBaseWidgetView 

-(void) setButtonProperties:(NGWidgetBaseData *)widgetData;
-(void) setTimeStampForView:(NSNumber *)timeStamp;
-(NSNumber*) getTimeStampForView;
@end

