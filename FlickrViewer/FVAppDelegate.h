//
//  FVAppDelegate.h
//  FlickrViewer
//
//  Created by Nguyen Ngoc Tan on 5/9/14.
//  Copyright (c) 2014 VietIS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ObjectiveFlickr.h"

@interface FVAppDelegate : UIResponder <UIApplicationDelegate, OFFlickrAPIRequestDelegate>

@property (strong, nonatomic) 	UIWindow *window;
@property (nonatomic, readonly) OFFlickrAPIContext *flickrContext;
@property (nonatomic, retain) NSString *flickrUserName;

@end
