/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImageView, UIView, NSString, UIImage;

@interface MPVideoBackgroundView : UIView  {
    int _interfaceOrientation;
    UIView *_imageView;
    UIImageView *_iconView;
    UIImageView *_backgroundPlaceholderImageView;
    UIView *_backgroundPlaceholderPosterImageView;
    UIView *_backgroundPlaceholderView;
    UIImageView *_customBackgroundImageView;
    NSString *_destinationName;
    int _destinationPlaceholderStyle;
    BOOL _showDestinationPlaceholder;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _layoutSubviewsPostflightHandler;

}

@property int interfaceOrientation;
@property(retain) UIImage * backgroundPlaceholderImage;
@property(readonly) UIView * backgroundPlaceholderView;
@property(retain) UIView * backgroundPlaceholderPosterImageView;
@property int destinationPlaceholderStyle;
@property(copy) NSString * destinationName;
@property(copy) id layoutSubviewsPostflightHandler;


- (id)layoutSubviewsPostflightHandler;
- (int)destinationPlaceholderStyle;
- (id)destinationName;
- (void)_createInformationalTitleView:(id*)arg1 systemFont:(id)arg2 lineBreakMode:(int)arg3;
- (id)qtIcon;
- (void)_updateDestinationBackgroundViewAnimated:(BOOL)arg1;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)setShowQTAudioOnlyUI:(BOOL)arg1;
- (void)setCustomBackgroundImage:(id)arg1;
- (id)backgroundPlaceholderPosterImageView;
- (void)setLayoutSubviewsPostflightHandler:(id)arg1;
- (void)setDestinationPlaceholderStyle:(int)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setShowDestinationPlaceholder:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBackgroundPlaceholderPosterImageView:(id)arg1;
- (id)backgroundPlaceholderImage;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (id)backgroundPlaceholderView;
- (void)setInterfaceOrientation:(int)arg1;
- (int)interfaceOrientation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end