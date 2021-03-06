/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFString : NSString {
    int _cd_rc;
    unsigned int _length;
    int _reserved1;
    int _reserved2;
    id _sourceData;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (const char *)UTF8String;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (const char *)cString;
- (unsigned int)cStringLength;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getCString:(char *)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)getCharacters:(unsigned short*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (unsigned int)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
