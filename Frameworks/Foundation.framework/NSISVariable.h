/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSISVariableDelegate>;

@interface NSISVariable : NSObject {
    <NSISVariableDelegate> *_delegate;
    int _refCount;
}

@property <NSISVariableDelegate> * delegate;
@property(readonly) BOOL shouldBeMinimized;
@property(readonly) int valueRestriction;

+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (id)delegate;
- (id)description;
- (id)markedConstraint;
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldBeIntegral;
- (BOOL)shouldBeMinimized;
- (BOOL)valueIsUserVisible;
- (int)valueRestriction;

@end
