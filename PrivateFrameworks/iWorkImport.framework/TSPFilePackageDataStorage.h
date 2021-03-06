/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSPFilePackage;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {
    struct { 
        unsigned int didCalculateIsReadable : 1; 
        unsigned int didCalculateEncodedLength : 1; 
        unsigned int didCalculateCRC : 1; 
        unsigned int isReadable : 1; 
        unsigned int isMissingData : 1; 
    unsigned int _CRC;
    unsigned long long _encodedLength;
    } _flags;
    TSPFilePackage *_package;
    NSString *_path;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)CRC;
- (BOOL)bookmarkDataNeedsWriteWithOptions:(unsigned int)arg1;
- (id)bookmarkDataWithOptions:(unsigned int)arg1;
- (BOOL)copyToTemporaryURL:(id)arg1 encryptionKey:(id)arg2;
- (id)decryptionKey;
- (void)didInitializeFromDocumentURL:(id)arg1;
- (unsigned long long)encodedLength;
- (id)initWithPath:(id)arg1 package:(id)arg2;
- (BOOL)isInPackage:(id)arg1;
- (BOOL)isMissingData;
- (BOOL)isReadable;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id)arg1;
- (void)resetFlags;
- (void)setIsMissingData:(BOOL)arg1;
- (id)streamReadChannel;
- (BOOL)writeData:(id)arg1 toPackageWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id*)arg4 didCopyDataToPackage:(BOOL*)arg5 isMissingData:(BOOL*)arg6;

@end
