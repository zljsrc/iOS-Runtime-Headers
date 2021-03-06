/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPassGroupDelegate>, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface PKPassGroup : NSObject {
    int _cardTemplate;
    NSMutableDictionary *_cardsByUniqueID;
    BOOL _containsPreIngestedCards;
    <PKPassGroupDelegate> *_delegate;
    NSDate *_firstActivationDate;
    unsigned int _frontmostCardIndex;
    NSString *_groupIdentifier;
    NSDate *_lastActivationDate;
    NSDate *_lastInsertionDate;
    NSString *_passTypeID;
    NSArray *_sortDescriptors;
    NSMutableArray *_sortedCards;
    NSString *_uniqueID;
}

@property int cardTemplate;
@property BOOL containsPreIngestedCards;
@property <PKPassGroupDelegate> * delegate;
@property(retain) NSDate * firstActivationDate;
@property unsigned int frontmostPassIndex;
@property(retain) NSString * groupIdentifier;
@property(retain) NSDate * lastActivationDate;
@property(retain) NSDate * lastInsertionDate;
@property(retain) NSString * passTypeID;
@property(readonly) NSString * uniqueID;

- (void)_adjustDatesForAddedCard:(id)arg1;
- (void)_adjustDatesForRemovedCard:(id)arg1 remainingCards:(id)arg2;
- (void)_adjustPreIngestedStatusForAddedCard:(id)arg1;
- (void)_adjustPreIngestedStatusForRemovedCard:(id)arg1 remainingCards:(id)arg2;
- (BOOL)_canAcceptActivationDate:(id)arg1;
- (double)_dateLeeway;
- (unsigned int)_insertionIndexForCard:(id)arg1;
- (void)addPass:(id)arg1;
- (void)addPassesFromGroup:(id)arg1;
- (id)allPasses;
- (BOOL)canAcceptPass:(id)arg1;
- (int)cardTemplate;
- (BOOL)containsPassWithUniqueID:(id)arg1;
- (BOOL)containsPreIngestedCards;
- (void)dealloc;
- (id)delegate;
- (id)firstActivationDate;
- (unsigned int)frontmostPassIndex;
- (id)groupIdentifier;
- (unsigned int)indexForPassUniqueID:(id)arg1;
- (id)initWithPass:(id)arg1;
- (id)lastActivationDate;
- (id)lastInsertionDate;
- (id)passAtIndex:(unsigned int)arg1;
- (unsigned int)passCount;
- (id)passTypeID;
- (id)passesByUniqueID;
- (void)removePassWithUniqueID:(id)arg1;
- (void)replacePassWithPass:(id)arg1;
- (void)setCardTemplate:(int)arg1;
- (void)setContainsPreIngestedCards:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstActivationDate:(id)arg1;
- (void)setFrontmostPassIndex:(unsigned int)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setLastActivationDate:(id)arg1;
- (void)setLastInsertionDate:(id)arg1;
- (void)setPassTypeID:(id)arg1;
- (id)uniqueID;

@end
