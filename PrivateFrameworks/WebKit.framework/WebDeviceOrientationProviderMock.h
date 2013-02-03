/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {
    WebDeviceOrientationProviderMockInternal *m_internal;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (id)lastOrientation;
- (void)setController:(struct DeviceOrientationController { }*)arg1;
- (void)setOrientation:(id)arg1;
- (void)startUpdating;
- (void)stopUpdating;

@end