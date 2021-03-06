/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKMessage>;

@interface CKMessagePart : NSObject {
    int _outgoingBubbleColor;
    <CKMessage> *_parentMessage;
    int _rowID;
}

@property int outgoingBubbleColor;
@property <CKMessage> * parentMessage;
@property int rowID;

+ (id)_assembleTextPartFromRange:(id)arg1;
+ (id)_newPartsForNode:(id)arg1 resources:(id)arg2 attachments:(id*)arg3;
+ (id)copyDeletedPart;
+ (id)copyDetachedMessageParts:(id)arg1;
+ (id)copyMessagePartsFromComposition:(id)arg1 attachmentParts:(id*)arg2;
+ (id)copyMessagePartsFromComposition:(id)arg1;
+ (id)copyUnknownPart;

- (id)composeData;
- (id)composeImages;
- (void)copyToPasteboard;
- (void)dealloc;
- (id)detachedCopy;
- (id)highlightData;
- (id)image;
- (id)imageData;
- (id)imageFilename;
- (BOOL)isDisplayable;
- (BOOL)isEqual:(id)arg1;
- (id)mediaObject;
- (int)outgoingBubbleColor;
- (id)parentMessage;
- (id)previewData;
- (id)previewImage;
- (id)previewText;
- (int)rowID;
- (void)setOutgoingBubbleColor:(int)arg1;
- (void)setParentMessage:(id)arg1;
- (void)setRowID:(int)arg1;
- (id)text;
- (int)type;

@end
