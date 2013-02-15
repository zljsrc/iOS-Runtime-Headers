/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftFunctionResponse : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    double _creationTime;
    } _originalCoordinate;
    } _shiftedCoordinate;
}

@property struct { double x1; double x2; } originalCoordinate;

- (id)initWithLocationShiftResponse:(id)arg1 originalCoordinate:(struct { double x1; double x2; })arg2;
- (BOOL)needsNewFunctionForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })originalCoordinate;
- (void)setOriginalCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })shiftedCoordinateForCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double*)arg2;
- (BOOL)wantsNewFunctionForCoordinate:(struct { double x1; double x2; })arg1;

@end