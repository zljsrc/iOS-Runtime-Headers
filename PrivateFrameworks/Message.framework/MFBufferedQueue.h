/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;

@interface MFBufferedQueue : NSObject <MFQueue> {
    unsigned int _currentSize;
    double _maximumLatency;
    unsigned int _maximumSize;
    NSMutableArray *_queue;
    double _timeOfLastFlush;
}

- (BOOL)addItem:(id)arg1;
- (void)dealloc;
- (BOOL)flush;
- (BOOL)handleItems:(id)arg1;
- (id)init;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (BOOL)isEmpty;
- (void)setMaximumLatency:(double)arg1;
- (void)setMaximumSize:(unsigned int)arg1;
- (unsigned int)sizeForItem:(id)arg1;

@end