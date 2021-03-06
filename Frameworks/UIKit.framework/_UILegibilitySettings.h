/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor;

@interface _UILegibilitySettings : NSObject {
    UIColor *_contentColor;
    float _imageOutset;
    float _minFillHeight;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    float _shadowAlpha;
    UIColor *_shadowColor;
    NSString *_shadowCompositingFilterName;
    float _shadowRadius;
    int _style;
}

@property(retain) UIColor * contentColor;
@property float imageOutset;
@property float minFillHeight;
@property(retain) UIColor * primaryColor;
@property(retain) UIColor * secondaryColor;
@property float shadowAlpha;
@property(retain) UIColor * shadowColor;
@property(copy) NSString * shadowCompositingFilterName;
@property float shadowRadius;
@property int style;

+ (id)sharedInstanceForStyle:(int)arg1;

- (id)contentColor;
- (void)dealloc;
- (float)imageOutset;
- (id)initWithContentColor:(id)arg1 contrast:(float)arg2;
- (id)initWithContentColor:(id)arg1;
- (id)initWithStyle:(int)arg1 contentColor:(id)arg2;
- (id)initWithStyle:(int)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
- (id)initWithStyle:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (float)minFillHeight;
- (id)primaryColor;
- (id)sb_description;
- (id)sb_styleString;
- (id)secondaryColor;
- (void)setContentColor:(id)arg1;
- (void)setImageOutset:(float)arg1;
- (void)setMinFillHeight:(float)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setPropertiesForStyle:(int)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setShadowAlpha:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowCompositingFilterName:(id)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setStyle:(int)arg1;
- (float)shadowAlpha;
- (id)shadowColor;
- (id)shadowCompositingFilterName;
- (float)shadowRadius;
- (int)style;

@end
