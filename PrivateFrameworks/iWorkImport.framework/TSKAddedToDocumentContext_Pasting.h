/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray;

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    NSMutableArray *mAddedDrawables;
    struct __CFDictionary { } *mTableIDMap;
}

- (void)addDrawable:(id)arg1;
- (id)addedDrawables;
- (BOOL)autoUpdateSmartFields;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setTableIDMap:(struct __CFDictionary { }*)arg1;
- (BOOL)syncChanges;
- (struct __CFDictionary { }*)tableIDMap;
- (BOOL)uniqueBookmarks;
- (BOOL)wasPasted;

@end