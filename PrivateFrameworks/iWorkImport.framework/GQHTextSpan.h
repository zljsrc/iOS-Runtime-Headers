/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTextSpan : NSObject  {
}

+ (int)handleTextList:(id)arg1 checkForTrailingBlanks:(BOOL)arg2 state:(id)arg3;
+ (int)handleTextMarker:(id)arg1 outputBlanks:(BOOL)arg2 state:(id)arg3;
+ (int)handleAutoNumber:(id)arg1 state:(id)arg2;
+ (int)handleAttachment:(id)arg1 state:(id)arg2;
+ (int)nonWhitespaceCount:(struct __CFArray { }*)arg1;
+ (int)handleSpan:(id)arg1 checkForTrailingBlanks:(BOOL)arg2 state:(id)arg3;
+ (int)handleTextBackgroundForStyle:(id)arg1 destStyle:(id)arg2 state:(id)arg3;
+ (int)handleTextListChild:(id)arg1 outputBlanks:(BOOL)arg2 state:(id)arg3;
+ (int)handlePageStart:(id)arg1 state:(id)arg2;
+ (int)handleContainerHint:(id)arg1 state:(id)arg2;


@end