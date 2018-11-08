/*
 Copyright 2015 OpenMarket Ltd
 Copyright 2017 Vector Creations Ltd

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <MatrixKit/MatrixKit.h>

/**
 Posted when the user interface theme has been changed.
 */
extern NSString *const kRiotDesignValuesDidChangeThemeNotification;

/**
 Convert a RGB hexadecimal value into a UIColor.
 */
#define UIColorFromRGB(rgbValue) \
    [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
                    green:((float)((rgbValue & 0x00FF00) >>  8))/255.0 \
                     blue:((float)((rgbValue & 0x0000FF) >>  0))/255.0 \
                    alpha:1.0]

#pragma mark - Caritas Theme Colors (depends on the selected theme light or dark).
extern UIColor *kCaritasNavigationBarBgColor;
extern UIColor *kCaritasPrimaryBgColor;
extern UIColor *kCaritasSecondaryBgColor;
extern UIColor *kCaritasPrimaryTextColor;
extern UIColor *kCaritasSecondaryTextColor; //subtitle, sending messages color.
extern UIColor *kCaritasPlaceholderTextColor; // nil is used to keep the default color.
extern UIColor *kCaritasTopicTextColor;
extern UIColor *kCaritasSelectedBgColor; // nil is used to keep the default color.
extern UIColor *kCaritasAuxiliaryColor; // kCaritasColorSilver by default.
extern UIColor *kCaritasOverlayColor; // fading behind dialog modals. This color includes the transparency value.
extern UIColor *kCaritasKeyboardColor;
extern UIColor *kCaritasTabBarSelectionColor;

#pragma mark - Caritas Colors
extern UIColor *kCaritasColorRed;
extern UIColor *kCaritasColorWhite;
extern UIColor *kCaritasColorGrey;
extern UIColor *kCaritasColorLinkBlue;
extern UIColor *kCaritasColorSilver;
extern UIColor *kCaritasColorPinkRed;
extern UIColor *kCaritasColorCuriousBlue;
extern UIColor *kCaritasColorLightGrey;
extern UIColor *kCaritasColorLightBlack;

#pragma mark - Riot Standard Room Member Power Level
extern NSInteger const kRiotRoomModeratorLevel;
extern NSInteger const kRiotRoomAdminLevel;

#pragma mark - Riot bar style
extern UIStatusBarStyle kCaritasDesignStatusBarStyle;
extern UIBarStyle kCaritasDesignSearchBarStyle;
extern UIColor *kCaritasDesignSearchBarTintColor;

extern UIKeyboardAppearance kCaritasKeyboard;

/**
 `RiotDesignValues` class manages the Riot design parameters
 */
@interface RiotDesignValues : NSObject

@end
