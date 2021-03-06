/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSData, NSString;

@interface MCProfileServiceProfile : MCProfile {
    NSString *_URLString;
    NSArray *_bogusPayloads;
    id _challenge;
    BOOL _confirmInstallation;
    NSArray *_deviceAttributes;
    NSData *_enrollmentIdentityPersistentID;
}

@property(retain) NSString * URLString;
@property(readonly) id challenge;
@property(readonly) BOOL confirmInstallation;
@property(readonly) NSArray * deviceAttributes;
@property(retain) NSData * enrollmentIdentityPersistentID;

- (void).cxx_destruct;
- (id)URLString;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (id)challenge;
- (BOOL)confirmInstallation;
- (id)description;
- (id)deviceAttributes;
- (id)enrollmentIdentityPersistentID;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 wasEncrypted:(BOOL)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id*)arg5;
- (id)localizedPayloadSummaryByType;
- (id)payloads;
- (void)setEnrollmentIdentityPersistentID:(id)arg1;
- (void)setURLString:(id)arg1;
- (id)stubDictionary;

@end
