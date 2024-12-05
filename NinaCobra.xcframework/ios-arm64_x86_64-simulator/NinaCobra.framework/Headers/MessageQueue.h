//
//  Parser.h
//  NinaCobraApi
//
//  Created by Vishal Gaikwad on 05/04/18.
//  Copyright © 2018 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MessageQueue : NSObject

@property (nonatomic) NSMutableArray *messageArray;

/*!
     @brief
 This method is used to init the class.
     @discussion
 This method is used to init the singleton class.
 */
-(id)init;

/*!
     @brief
 This method is used to add the passed message into queue.
     @discussion
 This method is used to add the passed message into queue.
 */
-(void) addItem:(NSString*) message;

/*!
     @brief
 This method is used to clear the queue.
     @discussion
 This method is used to clear the queue.
 */
-(void) clearQueue;

@end
