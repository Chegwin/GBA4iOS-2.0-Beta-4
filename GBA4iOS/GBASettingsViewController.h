//
//  GBASettingsViewController.h
//  GBA4iOS
//
//  Created by Riley Testut on 8/4/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GBAROMTableViewController.h"

extern NSString *const GBASettingsDidChangeNotification;

static NSString *GBASettingsFrameSkipKey = @"frameSkip";
static NSString *GBASettingsAutosaveKey = @"autosave";
static NSString *GBASettingsMixAudioKey = @"mixAudio";
static NSString *GBASettingsVibrateKey = @"vibrate";
static NSString *GBASettingsShowFramerateKey = @"showFramerate";
static NSString *GBASettingsGBASkinsKey = @"gbaSkins";
static NSString *GBASettingsGBCSkinsKey = @"gbcSkins";
static NSString *GBASettingsControllerOpacity = @"controllerOpacity";

@class GBASettingsViewController;

@protocol GBASettingsViewControllerDelegate <NSObject>

- (void)settingsViewControllerWillDismiss:(GBASettingsViewController *)settingsViewController;

@end


@interface GBASettingsViewController : UITableViewController

@property (weak, nonatomic) id<GBASettingsViewControllerDelegate> delegate;

+ (void)registerDefaults;

@end
