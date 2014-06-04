//
//  MainFeedViewController.h
//  test1
//
//  Created by Tim Cheng on 4/27/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "REFrostedViewController.h"

@interface MainFeedViewController : UIViewController

@property (assign, nonatomic) NSInteger initPostId;
@property (assign, nonatomic) NSInteger initUserId;
@property (assign, nonatomic) NSInteger initDegree;
@property (strong, nonatomic) NSString *feedTitle;

- (void)doCompose;

@end
