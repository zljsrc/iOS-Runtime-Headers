/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMArchiveManager, NSMutableArray, NSString;

@interface CSVMapper : CMMapper {
    struct CGSize { 
        float width; 
        float height; 
    CMArchiveManager *mArchiver;
    unsigned int mColumnCount;
    NSString *mFileName;
    } mPageSize;
    NSMutableArray *mRows;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(unsigned int)arg3 archiver:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGSize { float x1; float x2; })pageSize;

@end
