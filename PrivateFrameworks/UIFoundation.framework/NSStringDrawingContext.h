/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSDictionary;

@interface NSStringDrawingContext : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    float _actualScaleFactor;
    float _actualTrackingAdjustment;
    float _baselineOffset;
    NSDictionary *_linkAttributes;
    unsigned int _maximumNumberOfLines;
    float _minimumScaleFactor;
    float _minimumTrackingAdjustment;
    BOOL _multilineTruncation;
    unsigned int _numberOfLineFragments;
    float _scaledBaselineOffset;
    float _scaledLineHeight;
    } _totalBounds;
    BOOL _wantsBaselineOffset;
    BOOL _wantsNumberOfLineFragments;
    BOOL _wantsScaledBaselineOffset;
    BOOL _wantsScaledLineHeight;
}

@property float actualScaleFactor;
@property float actualTrackingAdjustment;
@property float baselineOffset;
@property unsigned int maximumNumberOfLines;
@property float minimumScaleFactor;
@property float minimumTrackingAdjustment;
@property unsigned int numberOfLineFragments;
@property float scaledBaselineOffset;
@property float scaledLineHeight;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } totalBounds;
@property BOOL wantsBaselineOffset;
@property BOOL wantsNumberOfLineFragments;
@property BOOL wantsScaledBaselineOffset;
@property BOOL wantsScaledLineHeight;
@property BOOL wrapsForTruncationMode;

- (float)actualScaleFactor;
- (float)actualTrackingAdjustment;
- (float)baselineOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)maximumNumberOfLines;
- (float)minimumScaleFactor;
- (float)minimumTrackingAdjustment;
- (unsigned int)numberOfLineFragments;
- (float)scaledBaselineOffset;
- (float)scaledLineHeight;
- (void)setActualScaleFactor:(float)arg1;
- (void)setActualTrackingAdjustment:(float)arg1;
- (void)setBaselineOffset:(float)arg1;
- (void)setMaximumNumberOfLines:(unsigned int)arg1;
- (void)setMinimumScaleFactor:(float)arg1;
- (void)setMinimumTrackingAdjustment:(float)arg1;
- (void)setNumberOfLineFragments:(unsigned int)arg1;
- (void)setScaledBaselineOffset:(float)arg1;
- (void)setScaledLineHeight:(float)arg1;
- (void)setTotalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setWantsBaselineOffset:(BOOL)arg1;
- (void)setWantsNumberOfLineFragments:(BOOL)arg1;
- (void)setWantsScaledBaselineOffset:(BOOL)arg1;
- (void)setWantsScaledLineHeight:(BOOL)arg1;
- (void)setWrapsForTruncationMode:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })totalBounds;
- (BOOL)wantsBaselineOffset;
- (BOOL)wantsNumberOfLineFragments;
- (BOOL)wantsScaledBaselineOffset;
- (BOOL)wantsScaledLineHeight;
- (BOOL)wrapsForTruncationMode;

@end
