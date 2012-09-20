/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSURL, NSArray;

@interface SLOpenGraphNode : NSObject  {
    BOOL _likedByMe;
    unsigned int _numberOfLikes;
    unsigned int _numberOfFriendLikes;
    NSArray *_likedByFriends;
    int _fetchState;
    NSURL *_URL;
}

@property(readonly) NSURL * URL;
@property(readonly) BOOL likedByMe;
@property(readonly) unsigned int globalLikeCount;
@property(readonly) unsigned int friendLikeCount;
@property(readonly) NSArray * likedByFriends;
@property int fetchState;


- (unsigned int)globalLikeCount;
- (unsigned int)friendLikeCount;
- (void)invalidate;
- (id)URL;
- (id)initWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)cache;
- (void)setFetchState:(int)arg1;
- (int)fetchState;
- (id)likedByFriends;
- (void)unlikeWithCompletion:(id)arg1;
- (void)likeWithCompletion:(id)arg1;
- (BOOL)likedByMe;
- (void)_startUpdateIfNeeded;

@end