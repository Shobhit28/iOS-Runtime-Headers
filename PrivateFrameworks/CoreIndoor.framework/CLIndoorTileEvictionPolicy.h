/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@class NSObject<OS_xpc_object>;

@interface CLIndoorTileEvictionPolicy : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_activity;
    BOOL _forceClean;
    double _maxModifiedAge;
}

@property(retain) NSObject<OS_xpc_object> * activity;
@property BOOL forceClean;
@property double maxModifiedAge;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activity;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)forceClean;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)maxModifiedAge;
- (void)setActivity:(id)arg1;
- (void)setForceClean:(BOOL)arg1;
- (void)setMaxModifiedAge:(double)arg1;
- (BOOL)tileLastModified:(double)arg1 needsEvictionAt:(double)arg2;

@end
