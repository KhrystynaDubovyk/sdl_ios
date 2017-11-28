//
//  SDLLockScreenPresenter.h
//  SmartDeviceLink-iOS
//
//  Created by Joel Fischer on 7/15/16.
//  Copyright © 2016 smartdevicelink. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SDLViewControllerPresentable.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const SDLLockScreenManagerWillPresentLockScreenViewController;
extern NSString *const SDLLockScreenManagerDidPresentLockScreenViewController;
extern NSString *const SDLLockScreenManagerWillDismissLockScreenViewController;
extern NSString *const SDLLockScreenManagerDidDismissLockScreenViewController;

/**
 *  An instance of `SDLViewControllerPresentable` used in production (not testing) for presenting the SDL lock screen.
 */
@interface SDLLockScreenPresenter : NSObject <SDLViewControllerPresentable>

- (instancetype)initWithLockViewController:(UIViewController *)lockViewController;

/**
 *  The view controller to be presented.
 */
@property (strong, nonatomic) UIViewController *lockViewController;

/**
 *  Whether or not `viewController` is currently presented.
 */
@property (assign, nonatomic, readonly) BOOL presented;

@end

NS_ASSUME_NONNULL_END
