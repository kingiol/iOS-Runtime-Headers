/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ASApplicationPageHeaderView, UIImage, SUItem, SUWebView;

@interface ASUpdatePageView : UIView  {
    UIImage *_applicationImage;
    ASApplicationPageHeaderView *_headerView;
    SUItem *_item;
    BOOL _needsReload;
    SUWebView *_webView;
}

@property(retain) UIImage * applicationImage;


- (void)reloadView;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_reloadHeaderView;
- (void)setItem:(id)arg1;
- (id)applicationImage;
- (void)setApplicationImage:(id)arg1;
- (void)_reloadDescriptionView;
- (void)dealloc;
- (void)flashScrollIndicators;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end