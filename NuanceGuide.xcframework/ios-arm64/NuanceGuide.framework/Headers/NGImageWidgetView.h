//
//  NGImageWidgetView.h
//  Pri-chat-Demo
//
//  Created by Vishal Gaikwad on 05/09/19.
//  Copyright © 2019 Vishal Gaikwad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NGBaseWidgetView.h"



@interface NGImageWidgetView : NGBaseWidgetView 
-(void) setTimeStampForView:(NSNumber *)timeStamp;
-(NSNumber*) getTimeStampForView;
@end

