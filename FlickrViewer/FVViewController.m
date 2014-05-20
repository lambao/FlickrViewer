//
//  FVViewController.m
//  FlickrViewer
//
//  Created by Nguyen Ngoc Tan on 5/9/14.
//  Copyright (c) 2014 VietIS. All rights reserved.
//

#import "FVViewController.h"
#import "ObjectiveFlickr.h"
#import "FlickrApiKey.h"
#import "FVApiKey.h"

@interface FVViewController ()

@end

@implementation FVViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self initFlickrContext];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)loginTouchDown:(id)sender {
}

-(void) initFlickrContext {
    if (!flickrContext) {
        flickrContext = [[OFFlickrAPIContext alloc] initWithAPIKey:OBJECTIVE_FLICKR_SAMPLE_API_KEY sharedSecret:OBJECTIVE_FLICKR_SAMPLE_API_SHARED_SECRET];
        
        NSString *authToken = [[NSUserDefaults standardUserDefaults] objectForKey:STORED_AUTH_TOKEN_KEY_NAME];
        NSString *authTokenSecret = [[NSUserDefaults standardUserDefaults] objectForKey:STORED_AUTH_TOKEN_SECRET_KEY_NAME];
        
        if (([authToken length] > 0) && ([authTokenSecret length] > 0)) {
            flickrContext.OAuthToken = authToken;
            flickrContext.OAuthTokenSecret = authTokenSecret;
        }

    };
    [self.flickrRequest fetchOAuthRequestTokenWithCallbackURL:[NSURL URLWithString:FVCallbackUrlBaseString]];
}
- (OFFlickrAPIRequest *) getFlickrRequest {
    if (![self flickrRequest]) {
        [self setFlickrRequest:[[OFFlickrAPIRequest alloc] initWithAPIContext:[self flickrContext]]];
        [[self flickrRequest] setDelegate:self];
        [[self flickrRequest] setRequestTimeoutInterval:60.0];
        
    };
    return self.flickrRequest;
}

@synthesize btnLogin;
@synthesize flickrContext;
@synthesize flickrUserName;
@synthesize flickrRequest = initFlickrRequest;

@end
