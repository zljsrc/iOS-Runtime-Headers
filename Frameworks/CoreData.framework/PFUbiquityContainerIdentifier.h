/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, PFUbiquityLocation;

@interface PFUbiquityContainerIdentifier : NSObject {
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    BOOL _usedExistingUUIDFile;
    PFUbiquityLocation *_uuidFileLocation;
    NSString *_uuidString;
}

@property(readonly) BOOL usedExistingUUIDFile;
@property(readonly) PFUbiquityLocation * uuidFileLocation;
@property(readonly) NSString * uuidString;

- (void)dealloc;
- (BOOL)identifyContainer:(id*)arg1;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (BOOL)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2;
- (void)setUUIDStringFromLocation:(id)arg1;
- (BOOL)usedExistingUUIDFile;
- (id)uuidFileLocation;
- (id)uuidString;
- (BOOL)writeToDisk:(id*)arg1;

@end
