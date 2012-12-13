//
//  AppDelegateiPhone.h
//  iBountyHunter
//
//  Created by Jorn Nordahl on 12/13/12.
//  Copyright (c) 2012 Jorn Nordahl. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AppDelegate.h"

@interface AppDelegateiPhone : AppDelegate {
    UITabBarController *tabBarController_;
}


//<UIApplicationDelegate>

@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (retain, nonatomic) IBOutlet UITabBarController *tabController;

@end
