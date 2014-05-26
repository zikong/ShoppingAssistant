//
//  ZKLoginViewController.h
//  ShoppingAssistant
//
//  Created by zikong on 14-5-26.
//  Copyright (c) 2014年 zikong. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^LoginBlock)(BOOL success);
@interface ZKLoginViewController : UIViewController
@property (nonatomic, strong) LoginBlock block;
@end
