//
//  ViewController.h
//  JavaScriptCore_demo
//
//  Created by shaoting on 16/3/5.
//  Copyright © 2016年 9elephas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JavaScriptCore/JavaScriptCore.h>

@interface ViewController : UIViewController
@property (nonatomic,strong) UIWebView * webView;
@property (nonatomic,weak) JSContext * context;
@end

