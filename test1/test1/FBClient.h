//
//  FBClient.h
//  test1
//
//  Created by Tim Cheng on 3/29/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FBClient : NSObject

+ (FBClient *)client;

@property (strong, nonatomic) NSString *id;
@property (strong, nonatomic) NSString *user_name;

@end
