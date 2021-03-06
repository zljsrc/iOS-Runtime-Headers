/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {
    CADisplayLink *m_displayLink;
    struct DisplayRefreshMonitor { int x1; double x2; boolx3; boolx4; boolx5; int x6; unsigned int x7; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_8_1_1; } x8; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct DisplayRefreshMonitorClient {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_9_1_1; } x9; void *x10; } *m_monitor;
}

- (void)dealloc;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithMonitor:(struct DisplayRefreshMonitor { int x1; double x2; boolx3; boolx4; boolx5; int x6; unsigned int x7; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_8_1_1; } x8; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct DisplayRefreshMonitorClient {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_9_1_1; } x9; void *x10; }*)arg1;
- (void)invalidate;

@end
