/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPDownloadProgressIndicator, MPImageCacheRequest, MPMediaDownloadObserver, MPMediaEntity, UIImage;

@interface IUMediaEntityCellConfiguration : IUArrayCellConfiguration {
    UIImage *_artwork;
    MPImageCacheRequest *_artworkImageRequest;
    MPMediaDownloadObserver *_downloadObserver;
    long long _downloadPersistentID;
    int _downloadStatus;
    MPMediaEntity *_entity;
    BOOL _isDisabled;
    BOOL _isGenius;
    BOOL _isSelectable;
    MPDownloadProgressIndicator *_progressIndicator;
}

@property(retain) UIImage * artwork;
@property(readonly) struct CGSize { float x1; float x2; } artworkSize;
@property(readonly) BOOL displaysArtworkFromRepresentativeItem;
@property(retain) MPMediaDownloadObserver * downloadObserver;
@property(readonly) MPMediaEntity * entity;
@property BOOL isDisabled;
@property BOOL isGenius;
@property BOOL isSelectable;
@property(retain) MPDownloadProgressIndicator * progressIndicator;

- (id)artwork;
- (struct CGSize { float x1; float x2; })artworkSize;
- (BOOL)canShowPurchasableMediaViews;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (void)dealloc;
- (id)description;
- (id)displayProperties;
- (BOOL)displaysArtworkFromRepresentativeItem;
- (id)downloadObserver;
- (id)entity;
- (BOOL)isDisabled;
- (BOOL)isGenius;
- (BOOL)isSelectable;
- (id)mediaItem;
- (id)newImageRequestWithMediaEntity:(id)arg1;
- (id)progressIndicator;
- (void)reloadData;
- (void)reloadImages;
- (void)reloadStringsWithProperties:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(id)arg2;
- (void)setDownloadObserver:(id)arg1;
- (void)setIsDisabled:(BOOL)arg1;
- (void)setIsGenius:(BOOL)arg1;
- (void)setIsSelectable:(BOOL)arg1;
- (void)setProgressIndicator:(id)arg1;

@end
