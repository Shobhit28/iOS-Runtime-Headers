/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLPlatformObject, NSMutableArray, NSString;

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject> {
    unsigned int _maximumCountOfRecordsInBatches;
    unsigned int _popState;
    NSMutableArray *_remainingClassesToBePopped;
    unsigned int _state;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property unsigned int maximumCountOfRecordsInBatches;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) Class superclass;

+ (id)orderedClassesForChanges;
+ (id)orderedClassesForDelete;

- (void).cxx_destruct;
- (BOOL)_appendBatchToStorage:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id*)arg3;
- (id)_changeWithIdentifier:(id)arg1;
- (BOOL)_popChangeBatchOfChangedRecords:(id*)arg1 maximumCount:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)_popChangeBatchOfDeletedRecords:(id*)arg1 maximumCount:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)appendBatch:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id*)arg3;
- (BOOL)beginTransientRepositoryWithError:(id*)arg1;
- (BOOL)deleteMingledRecordsWithError:(id*)arg1;
- (BOOL)endTransientRepositoryWithError:(id*)arg1;
- (BOOL)hasRecordWithIdentifier:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (unsigned int)maximumCountOfRecordsInBatches;
- (BOOL)openWithError:(id*)arg1;
- (BOOL)popChangeBatch:(id*)arg1 error:(id*)arg2;
- (BOOL)prepareForMinglingWithError:(id*)arg1;
- (BOOL)resetMingledRecordsWithError:(id*)arg1;
- (BOOL)resetTransientRepositoryWithError:(id*)arg1;
- (void)setMaximumCountOfRecordsInBatches:(unsigned int)arg1;
- (BOOL)storeTransientSyncAnchor:(id)arg1 error:(id*)arg2;
- (id)transientSyncAnchor;

@end
