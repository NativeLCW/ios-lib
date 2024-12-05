//
//  FileUploads.h
//  NuanceMessagingCore
//
//  Copyright © 2018 nuance. All rights reserved.
//

#import "SessionManager.h"

@interface FileUpload : API

- (void)uploadFile:(NSString *)fileName
       fileContent:(NSData *)filedata
    uploadProgress:(void (^)(double progress))uploadProgressBlock
        completion:(void (^)(BOOL isSuccess))completion;

@end
