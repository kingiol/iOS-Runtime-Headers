/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class UIImage, NSString, UIFont;

@interface CertInfoGradientLabel : UIView  {
    NSString *_text;
    UIFont *_font;
    UIImage *_gradient;
    struct CGColor { } *_patternColor;
}

@property(retain) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIImage * gradient;


- (void)setGradient:(id)arg1;
- (id)gradient;
- (void)dealloc;
- (id)text;
- (id)font;
- (void)setFont:(id)arg1;
- (struct CGColor { }*)_patternColor;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end