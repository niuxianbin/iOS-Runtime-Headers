/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptFacebookSession : SUScriptObject {
    SUScriptAppleAccount * _account;
}

@property (readonly) id hasAccounts;
@property (readonly) unsigned int likeStatusFlagFriendCount;
@property (readonly) unsigned int likeStatusFlagFriends;
@property (readonly) unsigned int likeStatusFlagGlobalCount;
@property (readonly) unsigned int likeStatusFlagMe;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completionFunction:(id)arg3;
- (id)hasAccounts;
- (id)initWithAppleAccount:(id)arg1;
- (unsigned int)likeStatusFlagFriendCount;
- (unsigned int)likeStatusFlagFriends;
- (unsigned int)likeStatusFlagGlobalCount;
- (unsigned int)likeStatusFlagMe;
- (void)likeURL:(id)arg1 completionFunction:(id)arg2;
- (id)scriptAttributeKeys;
- (void)unlikeURL:(id)arg1 completionFunction:(id)arg2;

@end
