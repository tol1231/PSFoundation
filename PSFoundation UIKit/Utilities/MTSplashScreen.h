//
//  MTSplashScreen.h
//  PSFoundation
//
//  Created by Matthias Tretter on 03.06.11.
//  Copyright 2011 @myell0w. All rights reserved.
//
//  Taken from Book iOS Recipes - The Pragmatic Programmers b4: Recipe 1
//  Originally Created by Matt Drance on 10/1/10.
//  Copyright 2010 Bookhouse Software, LLC. All rights reserved.
//

@class MTSplashScreen;

@protocol MTSplashScreenDelegate <NSObject>

@optional

- (void)splashScreenDidAppear:(MTSplashScreen *)splashScreen; 
- (void)splashScreenWillDisappear:(MTSplashScreen *)splashScreen; 
- (void)splashScreenDidDisappear:(MTSplashScreen *)splashScreen;

@end

@interface MTSplashScreen : UIViewController

@property (nonatomic, retain) UIImage *splashImage;
@property (nonatomic, assign) BOOL showsStatusBarOnDismissal;
@property (nonatomic, assign) id <MTSplashScreenDelegate> delegate;
@property (nonatomic, assign) NSTimeInterval delay;

+ (MTSplashScreen *)splashScreen;

- (void)hide;

@end
