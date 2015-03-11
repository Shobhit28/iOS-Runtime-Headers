/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MIPArtist, MIPSeries, NSString;

@interface MIPPodcast : PBCodable <NSCopying> {
    MIPArtist *_artist;
    NSString *_externalGuid;
    NSString *_feedUrl;
    MIPSeries *_series;
}

@property(retain) MIPArtist * artist;
@property(retain) NSString * externalGuid;
@property(retain) NSString * feedUrl;
@property(readonly) BOOL hasArtist;
@property(readonly) BOOL hasExternalGuid;
@property(readonly) BOOL hasFeedUrl;
@property(readonly) BOOL hasSeries;
@property(retain) MIPSeries * series;

- (void).cxx_destruct;
- (id)artist;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalGuid;
- (id)feedUrl;
- (BOOL)hasArtist;
- (BOOL)hasExternalGuid;
- (BOOL)hasFeedUrl;
- (BOOL)hasSeries;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)series;
- (void)setArtist:(id)arg1;
- (void)setExternalGuid:(id)arg1;
- (void)setFeedUrl:(id)arg1;
- (void)setSeries:(id)arg1;
- (void)writeTo:(id)arg1;

@end