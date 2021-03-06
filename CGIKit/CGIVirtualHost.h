//
//  CGIVirtualHost.h
//  ohttpd2
//
//  Created by Maxthon Chan on 13-5-16.
//  Copyright (c) 2013年 muski. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CGIVirtualHost : NSObject

@property NSURL *listenURL;
@property NSString *documentRoot;
@property NSArray *indexPages;

- (id)initWithListenURL:(NSURL *)URL;

@end
