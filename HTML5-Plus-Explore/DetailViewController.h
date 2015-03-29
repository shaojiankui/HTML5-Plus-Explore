//
//  DetailViewController.h
//  HTML5-Plus-Explore
//
//  Created by Jakey on 15/3/29.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//

#import "BaseViewController.h"
#import "UIWebView+Load.h"
@interface DetailViewController : BaseViewController
@property (weak, nonatomic) IBOutlet UIWebView *myWebView;
@property (strong, nonatomic)  NSString *uri;

@end
