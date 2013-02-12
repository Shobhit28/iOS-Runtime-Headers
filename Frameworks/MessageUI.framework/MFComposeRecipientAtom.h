/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipient, NSTimer, UITextInputTraits;

@interface MFComposeRecipientAtom : MFAtomView {
    unsigned int _wasSelectedWhenTouchesBegan : 1;
    unsigned int _touchesWereCancelled : 1;
    NSTimer *_holdTimer;
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
}

@property(retain) NSTimer * holdTimer;
@property(readonly) MFComposeRecipient * recipient;

+ (void)_initializeSafeCategory;

- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (id)accessibilityLabel;
- (void)dealloc;
- (void)handleTouchAndHold;
- (id)holdTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 recipient:(id)arg2;
- (BOOL)isAccessibilityElement;
- (void)moveLeft;
- (void)moveRight;
- (id)recipient;
- (void)setDelegate:(id)arg1;
- (void)setHoldTimer:(id)arg1;
- (id)title;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end