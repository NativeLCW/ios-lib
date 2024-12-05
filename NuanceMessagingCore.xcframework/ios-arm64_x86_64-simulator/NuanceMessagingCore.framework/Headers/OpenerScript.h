//
//  OpenerScript.h
//  NuanceMessagingCore
//
//  Created by mithun on 12/28/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OpenerScript : NSObject<NSXMLParserDelegate>{
    NSXMLParser *parser;
    NSMutableString *curElem;
}
@property(nonatomic, copy) void (^completionhandler)(NSString *opener);
- (void) getOpener:(NSString *)openerUrl andScriptID:(NSString*)scripID andScripName:(NSString*)scriptName andSiteID:(NSString*)siteID andCompletionBlock:(void (^)(NSString *opener))completionBlock;


@end
