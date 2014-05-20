//
//  FVViewController.h
//  FlickrViewer
//
//  Created by Nguyen Ngoc Tan on 5/9/14.
//  Copyright (c) 2014 VietIS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ObjectiveFlickr.h>

@interface FVViewController : UIViewController <OFFlickrAPIRequestDelegate>
@property (strong, nonatomic) IBOutlet UIView *btnLogin;
@property (nonatomic, readonly) OFFlickrAPIContext *flickrContext;
@property (nonatomic, retain) OFFlickrAPIRequest *flickrRequest;
@property (nonatomic, retain) NSString *flickrUserName;
- (IBAction)loginTouchDown:(id)sender;
@end
