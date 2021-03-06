/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ACAccount, DASettingsTemplate, DAStatusReport, NSArray, NSData, NSMutableDictionary, NSString, NSURL;

@interface DAAccount : BasicAccount <AccountFullAccountProtocol, AccountCreationProtocol, BasicAccountSyncing> {
    ACAccount *_backingAccountInfo;
    struct __CFDictionary { } *_consumers;
    int _dataclasses;
    BOOL _hasInitted;
    NSMutableDictionary *_haveWarnedAboutCertDict;
    BOOL _requiresAccountDeleteAndReAdd;
    DASettingsTemplate *_settingsTemplate;
    BOOL _shouldFailAllTasks;
    BOOL _shouldPromptForPassword;
    BOOL _shouldUseOpportunisticSockets;
    DAStatusReport *_statusReport;
    struct __CFURLStorageSession { } *_storageSession;
}

@property(copy) NSString * accountDescription;
@property(readonly) NSArray * appIdsForPasswordPrompt;
@property(readonly) ACAccount * backingAccountInfo;
@property(readonly) ACAccount * backingCredentialAccount;
@property(setter=setDAAccountVersion:) int daAccountVersion;
@property(copy) NSString * emailAddress;
@property(copy) NSArray * emailAddresses;
@property(readonly) int enabledDataclassesBitmask;
@property(retain) NSData * encryptionIdentityPersistentReference;
@property(copy) NSString * host;
@property(readonly) NSData * identityPersist;
@property(readonly) BOOL isChildAccount;
@property(readonly) int keychainAccessibilityType;
@property BOOL needsRediscovery;
@property(copy) NSString * password;
@property(readonly) NSString * persistentUUID;
@property int port;
@property(copy) NSURL * principalURL;
@property(readonly) NSString * scheduleIdentifier;
@property(copy) NSString * scheme;
@property(retain) DASettingsTemplate * settingsTemplate;
@property BOOL shouldAutodiscoverPrincipalURL;
@property BOOL shouldFailAllTasks;
@property BOOL shouldPromptForPassword;
@property BOOL shouldUseOpportunisticSockets;
@property(retain) NSData * signingIdentityPersistentReference;
@property(readonly) DAStatusReport * statusReport;
@property BOOL useSSL;
@property(copy) NSString * user;
@property(copy) NSString * username;

+ (Class)accountClass;
+ (Class)classForAccountType:(id)arg1;
+ (Class)clientClass;
+ (Class)daemonClass;
+ (id)defaultProperties;
+ (id)newAccountOfAccountType:(id)arg1;

- (int)_actionForTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 service:(id)arg3;
- (id)_exceptionsDict;
- (void)_handlePasswordNotification:(struct __CFUserNotification { }*)arg1 response:(unsigned long)arg2 callback:(id)arg3;
- (BOOL)_isIdentityManagedByProfile;
- (void)_removeHostsToTrust;
- (void)_renewAccountCredentialsWithHandler_legacy:(id)arg1;
- (id)_serverSuffixesToAlwaysFail;
- (void)_setPersistentUUID:(id)arg1;
- (BOOL)_upgradeSelfFromPreKirkwood;
- (BOOL)accountBoolPropertyForKey:(id)arg1;
- (BOOL)accountContainsEmailAddress:(id)arg1;
- (id)accountDescription;
- (id)accountID;
- (int)accountIntPropertyForKey:(id)arg1;
- (BOOL)accountNeedsUpgrade;
- (id)accountPropertyForKey:(id)arg1;
- (id)addUsernameToURL:(id)arg1;
- (id)appIdsForPasswordPrompt;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (id)backingACAccountTypeIdentifier;
- (id)backingAccountInfo;
- (id)backingCredentialAccount;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2;
- (void)cancelAllSearchQueries;
- (void)cancelDownloadingInstance:(id)arg1 error:(id)arg2;
- (void)cancelSearchQuery:(id)arg1;
- (void)cancelShareResponseInstance:(id)arg1 error:(id)arg2;
- (void)checkValidityWithConsumer:(id)arg1;
- (BOOL)childKeyIsSharedForReading:(id)arg1;
- (BOOL)childKeyIsSharedForWriting:(id)arg1;
- (void)cleanupAccountFiles;
- (id)consumerForTask:(id)arg1;
- (id)contactsFolders;
- (struct __CFURLStorageSession { }*)copyStorageSession;
- (int)daAccountVersion;
- (id)dataclassProperties;
- (void)dealloc;
- (id)defaultContactsFolder;
- (id)defaultContainerIdentifierForDADataclass:(int)arg1;
- (id)defaultEventsFolder;
- (id)defaultNotesFolder;
- (id)defaultToDosFolder;
- (id)delegateeInvitationICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3;
- (id)deletedItemsFolder;
- (id)description;
- (id)displayName;
- (id)domainOnly;
- (id)emailAddress;
- (id)emailAddresses;
- (int)enabledDataclassesBitmask;
- (BOOL)enabledForDADataclass:(int)arg1;
- (id)encryptionIdentityPersistentReference;
- (id)eventsFolders;
- (struct __CFData { }*)exceptionsForDigest:(id)arg1;
- (void)getRootFolderWithConsumer:(id)arg1;
- (void)handleTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 withCompletionBlock:(id)arg3;
- (BOOL)handleTrustChallenge:(id)arg1;
- (BOOL)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (id)host;
- (id)identityPersist;
- (id)inboxFolder;
- (id)initWithBackingAccountInfo:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (BOOL)isActiveSyncAccount;
- (BOOL)isCalDAVAccount;
- (BOOL)isCalDAVChildAccount;
- (BOOL)isCardDAVAccount;
- (BOOL)isChildAccount;
- (BOOL)isDAMMeAccount;
- (BOOL)isDisabled;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)isHotmailAccount;
- (BOOL)isLDAPAccount;
- (BOOL)isOwnedByPayload:(id)arg1;
- (int)keychainAccessibilityType;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (BOOL)monitorFolderWithID:(id)arg1;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (BOOL)needsRediscovery;
- (id)notesFolders;
- (id)owningProfile;
- (id)password;
- (id)passwordWithExpected:(BOOL)arg1;
- (void)performSearchQuery:(id)arg1;
- (id)persistentUUID;
- (int)port;
- (void)prepareForAccountSave;
- (id)principalURL;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)removeClientCertificateData;
- (void)removeConsumerForTask:(id)arg1;
- (void)renewAccountCredentialsWithHandler:(id)arg1;
- (BOOL)requiresAccountDeleteAndReAdd;
- (void)resetAccountID;
- (BOOL)resetCertWarnings;
- (void)resetStatusReport;
- (id)respondToShareRequestForCalendar:(id)arg1 withResponse:(int)arg2 consumer:(id)arg3;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)saveAccountProperties;
- (void)saveAccountSettings;
- (void)saveChildAccountSettingsWithAccountsManager:(id)arg1;
- (id)scheduleIdentifier;
- (id)scheme;
- (BOOL)searchQueriesRunning;
- (BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (id)sentItemsFolder;
- (void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (void)setDAAccountVersion:(int)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDADataclass:(int)arg2;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (void)setExceptions:(struct __CFData { }*)arg1 forDigest:(id)arg2;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (void)setHost:(id)arg1;
- (void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(BOOL)arg2;
- (void)setNeedsRediscovery:(BOOL)arg1;
- (void)setPassword:(id)arg1 withAccessibility:(int)arg2;
- (void)setPassword:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setSettingsTemplate:(id)arg1;
- (void)setShouldAutodiscoverPrincipalURL:(BOOL)arg1;
- (void)setShouldFailAllTasks:(BOOL)arg1;
- (void)setShouldPromptForPassword:(BOOL)arg1;
- (void)setShouldUseOpportunisticSockets:(BOOL)arg1;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (void)setToDosNumberOfPastDaysToSync:(int)arg1;
- (void)setUseSSL:(BOOL)arg1;
- (void)setUser:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)settingsTemplate;
- (BOOL)shouldAutodiscoverPrincipalURL;
- (BOOL)shouldFailAllTasks;
- (BOOL)shouldPromptForPassword;
- (BOOL)shouldUseOpportunisticSockets;
- (id)signingIdentityPersistentReference;
- (id)spinnerIdentifiers;
- (id)stateString;
- (id)statusReport;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (BOOL)supportsDADataclass:(int)arg1;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (id)syncStoreIdentifier;
- (void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(BOOL)arg2;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(struct { int x1; int x2; }*)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 previousTagIsSuspect:(BOOL)arg8 consumer:(id)arg9;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { int x1; int x2; int x3; int x4; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 consumer:(id)arg9;
- (void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { int x1; int x2; int x3; int x4; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (void)tearDown;
- (id)toDosFolders;
- (int)toDosNumberOfPastDaysToSync;
- (BOOL)upgradeAccount;
- (void)upgradeAccountSpecificPropertiesOnAccount:(id)arg1 inStore:(id)arg2 parentAccount:(id)arg3;
- (BOOL)upgradeToAccountsdWithStore:(id)arg1 parentAccount:(id)arg2;
- (void)upgradeToHoodooAccountInfo;
- (id)urlForKeychain;
- (BOOL)useSSL;
- (id)user;
- (id)username;
- (id)usernameWithoutDomain;
- (BOOL)usesLegacyAccountSettings;
- (id)version;

@end
