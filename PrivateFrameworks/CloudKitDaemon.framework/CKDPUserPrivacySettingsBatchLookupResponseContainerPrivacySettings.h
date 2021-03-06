/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPUserPrivacySettings, NSMutableArray, NSString;

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable <NSCopying> {
    struct { 
        unsigned int applicationContainerEnvironment : 1; 
    NSMutableArray *_applicationBundles;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    } _has;
    CKDPUserPrivacySettings *_userPrivacySettings;
}

@property(retain) NSMutableArray * applicationBundles;
@property(retain) NSString * applicationContainer;
@property int applicationContainerEnvironment;
@property(readonly) BOOL hasApplicationContainer;
@property BOOL hasApplicationContainerEnvironment;
@property(readonly) BOOL hasUserPrivacySettings;
@property(retain) CKDPUserPrivacySettings * userPrivacySettings;

- (void).cxx_destruct;
- (void)addApplicationBundle:(id)arg1;
- (id)applicationBundleAtIndex:(unsigned int)arg1;
- (id)applicationBundles;
- (unsigned int)applicationBundlesCount;
- (id)applicationContainer;
- (int)applicationContainerEnvironment;
- (void)clearApplicationBundles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasApplicationContainer;
- (BOOL)hasApplicationContainerEnvironment;
- (BOOL)hasUserPrivacySettings;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setApplicationBundles:(id)arg1;
- (void)setApplicationContainer:(id)arg1;
- (void)setApplicationContainerEnvironment:(int)arg1;
- (void)setHasApplicationContainerEnvironment:(BOOL)arg1;
- (void)setUserPrivacySettings:(id)arg1;
- (id)userPrivacySettings;
- (void)writeTo:(id)arg1;

@end
