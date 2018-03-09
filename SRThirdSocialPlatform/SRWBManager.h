//
//  SRWBManager.h
//  SRThirdSocialPlatformDemo
//
//  Created by 郭伟林 on 16/9/14.
//  Copyright © 2016年 SR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRThirdSocialManager.h"

// 微博 SDK 依赖的系统库
// QuartzCore.framework
// ImageIO.framework
// SystemConfiguration.framework
// Security.framework
// CoreTelephony.framework
// CoreText.framework
// UIKit.framework
// Foundation.framework
// CoreGraphics.framework

typedef void (^GetTokenAndOpenIDCompletionBlock)(NSError *error, NSString *token, NSString *openID);

@interface SRWBManager : NSObject

+ (void)registerApp;

+ (BOOL)isAppInstalled;

+ (void)installApp;

+ (BOOL)handleOpenURL:(NSURL *)aURL;

+ (void)authRequestWithAuthSuccess:(SRThirdSocialAuthSuccess)authSuccess authError:(SRThirdSocialAuthError)authError;

+ (void)loginRequestWithLoginSuccess:(SRThirdSocialLoginSuccess)loginSuccess loginError:(SRThirdSocialLoginError)loginError;

+ (void)getTokenAndOpenIDCompletion:(GetTokenAndOpenIDCompletionBlock)completion;

@end
