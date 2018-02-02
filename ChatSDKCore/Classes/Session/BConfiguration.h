//
//  BConfiguration.h
//  AFNetworking
//
//  Created by Ben on 11/7/17.
//

#import <Foundation/Foundation.h>

@interface BConfiguration : NSObject

@property (nonatomic, readwrite) NSString * messageColorMe;
@property (nonatomic, readwrite) NSString * messageColorReply;
@property (nonatomic, readwrite) NSString * rootPath;
@property (nonatomic, readwrite) BOOL appBadgeEnabled;
@property (nonatomic, readwrite) NSString * defaultUserName;
@property (nonatomic, readwrite) NSString * defaultUserNamePrefix;
@property (nonatomic, readwrite) BOOL showEmptyChats;
@property (nonatomic, readwrite) BOOL allowUsersToCreatePublicChats;
@property (nonatomic, readwrite) BOOL googleLoginEnabled;
@property (nonatomic, readwrite) BOOL facebookLoginEnabled;
@property (nonatomic, readwrite) BOOL twitterLoginEnabled;
@property (nonatomic, readwrite) BOOL anonymousLoginEnabled;
@property (nonatomic, readwrite) NSString * defaultServer;


+(BConfiguration *) configuration;

@end
