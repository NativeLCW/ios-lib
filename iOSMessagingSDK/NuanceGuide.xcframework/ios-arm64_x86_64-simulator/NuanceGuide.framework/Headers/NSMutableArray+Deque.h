//
//  NSMutableArray+Deque.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (Deque)
- (void)push:(NSObject *)anObject;
- (NSObject *)pop;
- (BOOL)isEmpty;
- (NSObject *)peek;
@end
