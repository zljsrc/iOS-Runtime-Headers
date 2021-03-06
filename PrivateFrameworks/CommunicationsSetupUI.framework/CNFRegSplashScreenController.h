/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class <CNFRegFirstRunDelegate>, CNFRegController, CNFRegLearnMoreButton, UIBarButtonItem;

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience> {
    <CNFRegFirstRunDelegate> *_delegate;
    CNFRegLearnMoreButton *_learnMoreButton;
    CNFRegController *_regController;
}

@property(readonly) int currentAppearanceStyle;
@property(retain) UIBarButtonItem * customLeftButton;
@property(retain) UIBarButtonItem * customRightButton;
@property <CNFRegFirstRunDelegate> * delegate;
@property(retain) CNFRegController * regController;
@property BOOL showSplash;

- (void)_getStartedPressed:(id)arg1;
- (void)_learnMorePressed:(id)arg1;
- (id)_shadowLabelColor;
- (id)_shadowedLabelWithFont:(id)arg1 text:(id)arg2;
- (float)_startingYOffset;
- (int)currentAppearanceStyle;
- (id)customLeftButton;
- (id)customRightButton;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)loadView;
- (id)regController;
- (void)setCustomLeftButton:(id)arg1;
- (void)setCustomRightButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)splashImage;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willBecomeActive;

@end
