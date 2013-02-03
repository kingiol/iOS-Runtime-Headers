/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray, NSLock;

@interface ISAccountStore : NSObject <ISSingleton> {
    NSMutableArray *_accounts;
    NSLock *_lock;
}

@property(copy,readonly) NSArray *accounts;
@property(getter=isExpired,readonly) BOOL expired;

+ (BOOL)allowChangeAccount;
+ (id)primaryAccount;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)_accountsChangedNotification:(id)arg1;
- (BOOL)_addAccount:(id)arg1;
- (void)_commitAccountsToDaemon;
- (void)_commitAccountsToLockdown;
- (void)_loadAccounts;
- (void)_loadAccountsFromDaemon;
- (void)_loadAccountsFromLockdown;
- (void)_lock;
- (id)_ntsAccountForDSID:(id)arg1;
- (id)_primaryAccount:(const struct __CFString {}**)arg1;
- (BOOL)_removeAccount:(id)arg1;
- (void)_setAccounts:(id)arg1;
- (void)_signInAccountWithDSID:(id)arg1;
- (void)_syncDidEndNotification:(id)arg1;
- (void)_unlock;
- (id)accountForDSID:(id)arg1;
- (id)accounts;
- (BOOL)addAccount:(id)arg1;
- (void)changeAccount;
- (void)commitAccounts;
- (void)dealloc;
- (id)init;
- (BOOL)isExpired;
- (BOOL)parseCreditStringForProtocol:(id)arg1;
- (BOOL)removeAccount:(id)arg1;
- (void)resetExpiration;
- (BOOL)setUserWithResponse:(id)arg1;
- (void)signIn;
- (void)signOut;

@end