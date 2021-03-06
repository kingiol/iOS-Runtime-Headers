/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSDictionary, NSMutableDictionary, NSOperationQueue;

@interface TIResourcePathManager : NSObject {
    NSDictionary *_inputModeAssets;
    void *_mobileAssetFrameworkFileHandle;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_resourcePaths;
}

@property(retain) NSDictionary * inputModeAssets;
@property(readonly) NSOperationQueue * operationQueue;

+ (id)sharedInstance;

- (id)assetQueryForType:(id)arg1;
- (void)clearPathsForType:(int)arg1;
- (void)dealloc;
- (void)didFetchAssets;
- (void)fetchAssets;
- (oneway void)fetchAssetsForQueryResults:(id)arg1 withError:(id)arg2 updatingArray:(id)arg3 continuation:(id)arg4;
- (oneway void)fetchAssetsWithName:(id)arg1 continuation:(id)arg2;
- (oneway void)fetchAssetsWithNames:(id)arg1 forInputModes:(id)arg2 updatingDictionary:(id)arg3 continuation:(id)arg4;
- (oneway void)handleUninstalledAsset:(id)arg1 withError:(id)arg2 continuation:(id)arg3;
- (id)init;
- (id)inputModeAssets;
- (BOOL)loadMobileAssetLibrary;
- (id)mobileAssetConstant:(const char *)arg1;
- (id)operationQueue;
- (id)pathsOfType:(int)arg1;
- (void)postNotification:(id)arg1 forType:(int)arg2;
- (void)postNotification:(id)arg1;
- (void)postNotificationForType:(int)arg1;
- (void)pushPath:(id)arg1 forType:(int)arg2;
- (void)resendNotification:(id)arg1;
- (void)setInputModeAssets:(id)arg1;
- (void)setupMobileAssets;
- (void)setupNotifications;
- (void)unloadMobileAssetLibrary;
- (id)versionString;

@end
