//
//  FlickrApiKey.h
//  FlickrViewer
//
//  Created by Nguyen Ngoc Tan on 5/9/14.
//  Copyright (c) 2014 VietIS. All rights reserved.
//

#define OBJECTIVE_FLICKR_SAMPLE_API_KEY             @"11894b7b6a4b4056d6bd1dd0b1ac7685"
#define OBJECTIVE_FLICKR_SAMPLE_API_SHARED_SECRET   @"b8dfdbeb383fd879"

// preferably, the auth token is stored in the keychain, but since working with keychain is a pain, we use the simpler default system
#define STORED_AUTH_TOKEN_KEY_NAME @"FlickrOAuthToken"
#define STORED_AUTH_TOKEN_SECRET_KEY_NAME @"FlickrOAuthTokenSecret"
#define GET_ACCESS_TOKEN_STEP @"kGetAccessTokenStep"
#define CHECK_TOKEN_STEP @"kCheckTokenStep"

// Open App by Url
#define SRCallbackURLBaseString = @"flickrviewer://auth"
