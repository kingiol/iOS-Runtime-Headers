/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSTimer, IMHandle, IMAccount, NSData, IMPair, IMAVChatParticipant, NSError, NSDate, NSDictionary, NSObject<OS_dispatch_queue>, IMAVChatFeature, NSArray, NSString, NSMutableDictionary, NSMutableArray, NSNumber;

@interface IMAVChat : NSObject <IMSystemMonitorListener> {
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSNumber *_natType;
    NSMutableDictionary *_extraServerContext;
    NSDictionary *_errorDict;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSDate *_dateReceivedRelayInitiate;
    NSDate *_dateReceivedRelayUpdate;
    NSDate *_interruptionBegan;
    NSString *_participantNames;
    NSDictionary *_pingTestResults;
    NSNumber *_frontCameraCaptureTime;
    NSNumber *_backCameraCaptureTime;
    NSNumber *_dataRate;
    NSNumber *_dataUploaded;
    NSNumber *_dataDownloaded;
    unsigned int _localNetworkConnectionType;
    unsigned int _remoteNetworkConnectionType;
    NSData *_connectData;
    NSDictionary *_callerProperties;
    NSMutableDictionary *_unknownPartyStates;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_inviteTimeoutTimer;
    NSDate *_inviteTimeoutTimerStart;
    NSTimer *_firstFrameTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    NSTimer *_breakBeforeMakeTimeoutTimer;
    id _conferenceController;
    int _callID;
    unsigned int _sessionID;
    unsigned int _addStatus;
    NSError *_error;
    int _addableParticipants;
    unsigned int _localState;
    unsigned int _lastPostedState;
    IMPair *_pendingPreemptiveRelayInitate;
    NSString *_callStatisticsGUID;
    struct CGSize { 
        float width; 
        float height; 
    } _portraitAspectRatios;
    struct CGSize { 
        float width; 
        float height; 
    } _landscapeAspectRatios;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    BOOL _hasGatheredInfo;
    BOOL _hasReceivedFirstFrame;
    BOOL _isListening;
    BOOL _isCounterProposalConnect;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
    BOOL _isTerminating;
    BOOL _Q8IrisOpen;
    BOOL _usingCoercedIDs;
    BOOL _suppressBeginChat;
    BOOL _isCaller;
    BOOL _isVideo;
    BOOL _dataOut;
    BOOL _dataIn;
    BOOL _didRemoteMute;
    BOOL _didRemotePause;
    BOOL _participantOrderFinal;
    int _connectionType;
    BOOL _needsVideoRestart;
    BOOL _needsAudioRestart;
    BOOL _airplaneModeEnabled;
    BOOL _isVideoInterrupted;
    BOOL _isAudioInterrupted;
    IMAVChatFeature *_recorder;
    IMAVChatFeature *_auxVideo;
    IMAVChatFeature *_ard;
    BOOL __isCallUpgrade;
}

@property void* localVideoLayer;
@property void* localVideoBackLayer;
@property unsigned int cameraOrientation;
@property unsigned int cameraType;
@property BOOL lockCamera;
@property double invitationTimeoutTime;
@property double connectionTimeoutTime;
@property(setter=setMute:) BOOL isMute;
@property(setter=setRemoteMute:) BOOL isRemoteMute;
@property(readonly) BOOL isChatMute;
@property BOOL isSendingAudio;
@property(readonly) BOOL didRemoteMute;
@property(setter=setPaused:) BOOL isPaused;
@property(setter=setRemotePaused:) BOOL isRemotePaused;
@property(readonly) BOOL isChatPaused;
@property(readonly) BOOL hasReceivedFirstFrame;
@property BOOL isSendingVideo;
@property BOOL allowsVideo;
@property(readonly) BOOL didRemotePause;
@property(readonly) BOOL _allParticipantsUsingICE;
@property unsigned int sessionID;
@property int callID;
@property(retain) NSString * conferenceID;
@property(retain) NSString * GUID;
@property(retain) IMHandle * initiatorIMHandle;
@property(readonly) IMHandle * otherIMHandle;
@property(readonly) IMAccount * account;
@property(readonly) IMAVChatParticipant * initiatorParticipant;
@property(readonly) IMAVChatParticipant * localParticipant;
@property(retain) NSArray * participants;
@property(readonly) NSArray * remoteParticipants;
@property unsigned int state;
@property(readonly) BOOL isActive;
@property(readonly) BOOL isStateFinal;
@property(readonly) int endedError;
@property(readonly) unsigned int endedReason;
@property(readonly) NSDictionary * errorDictionary;
@property(readonly) BOOL dataOut;
@property(readonly) BOOL dataIn;
@property(readonly) BOOL isQ8IrisOpen;
@property(setter=_setCallerProperties:,retain) NSDictionary * callerProperties;
@property(readonly) int addableParticipants;
@property(readonly) unsigned int addStatus;
@property(readonly) int numActiveParticipants;
@property(readonly) NSString * participantNames;
@property(readonly) NSDictionary * _extraServerContext;
@property(setter=_setCallStatisticsGUID:,retain) NSString * _callStatisticsGUID;
@property(setter=_setConferenceController:) id _conferenceController;
@property(setter=_setNatType:,retain) NSNumber * _natType;
@property(readonly) NSNumber * _remoteNatType;
@property(readonly) NSNumber * _currentNatType;
@property(setter=_setConnectionType:) int _connectionType;
@property(readonly) NSNumber * _connectDuration;
@property(readonly) NSNumber * _callDuration;
@property(readonly) NSNumber * _relayConnectDuration;
@property(readonly) BOOL _usesRelay;
@property(setter=_setInterruptionBegan:,retain) NSDate * _interruptionBegan;
@property(setter=_setFrontCameraCaptureTime:,retain) NSNumber * _frontCameraCaptureTime;
@property(setter=_setBackCameraCaptureTime:,retain) NSNumber * _backCameraCaptureTime;
@property(setter=_setDataRate:,retain) NSNumber * _dataRate;
@property(setter=_setDataUploaded:,retain) NSNumber * _dataUploaded;
@property(setter=_setDataDownloaded:,retain) NSNumber * _dataDownloaded;
@property(setter=_setIsVideoInterrupted:) BOOL _isVideoInterrupted;
@property(setter=_setIsAudioInterrupted:) BOOL _isAudioInterrupted;
@property(setter=_setIsCallUpgrade:) BOOL _isCallUpgrade;
@property(setter=_setLocalNetworkConnectionType:) unsigned int _localNetworkConnectionType;
@property(setter=_setRemoteNetworkConnectionType:) unsigned int _remoteNetworkConnectionType;
@property(setter=_setNeedsAudioRestart:) BOOL _needsAudioRestart;
@property(setter=_setNeedsVideoRestart:) BOOL _needsVideoRestart;
@property(setter=_setQueue:) NSObject<OS_dispatch_queue> * _queue;
@property(setter=_setPingTestResults:,retain) NSDictionary * _pingTestResults;
@property(setter=_setIsCaller:) BOOL isCaller;
@property(setter=_setIsVideo:) BOOL isVideo;
@property(setter=_setIsListening:) BOOL _isListening;
@property(setter=_setDateEnded:,retain) NSDate * dateEnded;
@property(readonly) BOOL _isTeminating;
@property(setter=_setHasPendingInit:) BOOL _hasPendingInit;
@property(setter=_setHasPendingAccept:) BOOL _hasPendingAccept;
@property(setter=_setUsingCoercedIDs:) BOOL _usingCoercedIDs;
@property(setter=_setParticipantOrderFinal:) BOOL participantOrderFinal;
@property(setter=_setSuppressBeginChat:) BOOL suppressBeginChat;
@property(setter=_setIsCounterProposalConnect:) BOOL _isCounterProposalConnect;
@property(setter=_setConnectData:,retain) NSData * _connectData;
@property(readonly) BOOL canUseRelay;
@property(readonly) NSDate * dateCreated;
@property(readonly) NSDate * dateConnected;

+ (id)alloc;
+ (id)avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)chatWithSessionID:(unsigned int)arg1;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (BOOL)isStateFinal:(unsigned int)arg1;
+ (id)chatList;
+ (id)connectedChats;
+ (id)connectingChats;
+ (id)acceptedChats;
+ (BOOL)isStateActive:(unsigned int)arg1;
+ (id)avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2;
+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;
+ (int)maxRemoteParticipantsVideo:(BOOL)arg1;
+ (id)allowedClassesForArchives;
+ (double)defaultInvitationTimeoutTime;
+ (double)defaultConnectionTimeoutTime;
+ (id)avChatWithConferenceID:(id)arg1;
+ (id)bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)outgoingInvitations;
+ (id)incomingInvitations;
+ (id)_avChatArray;
+ (id)connectedChat;
+ (id)nonFinalChat;
+ (id)activeChat;
+ (id)avChatConnectingFromIMHandle:(id)arg1;
+ (id)avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;

- (void)declineInvitation;
- (void)acceptInvitation;
- (id)localParticipant;
- (id)participantWithID:(id)arg1;
- (id)participants;
- (void)_setState:(unsigned int)arg1;
- (unsigned int)state;
- (id)description;
- (void)dealloc;
- (BOOL)isVideo;
- (void)_reportError:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (BOOL)isActive;
- (id)conferenceID;
- (id)_dataRate;
- (void*)localVideoLayer;
- (void)setLocalVideoLayer:(void*)arg1;
- (BOOL)stopPreview;
- (void)setCameraType:(unsigned int)arg1;
- (unsigned int)sessionID;
- (BOOL)isCaller;
- (void)setCallID:(int)arg1;
- (int)callID;
- (void)finalizeOrderWithVideoFrom:(id)arg1;
- (id)orderedRemotePartyIDs;
- (id)stringForAddStatus;
- (BOOL)_allParticipantsUsingICE;
- (int)numActiveParticipants;
- (id)stringForAddStatus:(unsigned int)arg1;
- (BOOL)_imHandlesRequireCoercedIDs:(id)arg1;
- (void)_finalizeParticipantOrder:(id)arg1 andNotify:(BOOL)arg2;
- (id)participantsNotInNuggets:(id)arg1;
- (BOOL)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (void)_saveAudioRestartState;
- (void)_saveVideoRestartState;
- (void)_resumeVideoState;
- (void)_resumeAudioState;
- (BOOL)isLocalNetworkStalled;
- (void)toggleSendingVideo;
- (void)setAllowsVideo:(BOOL)arg1;
- (BOOL)allowsVideo;
- (BOOL)didRemotePause;
- (void)toggleChatPaused;
- (BOOL)isChatPaused;
- (BOOL)hasReceivedFirstFrame;
- (void)toggleRemotePaused;
- (void)togglePaused;
- (void)setRemotePaused:(BOOL)arg1;
- (BOOL)isRemotePaused;
- (void)toggleSendingAudio;
- (BOOL)didRemoteMute;
- (void)toggleChatMute;
- (BOOL)isChatMute;
- (void)toggleRemoteMute;
- (void)toggleMute;
- (void)setRemoteMute:(BOOL)arg1;
- (BOOL)isRemoteMute;
- (BOOL)isMute;
- (void)auxVideoEndedForPersonWithID:(id)arg1;
- (void)auxVideoBeganForPersonWithID:(id)arg1;
- (void)conferencePersonWithID:(id)arg1 approvedAuxVideo:(BOOL)arg2;
- (BOOL)shouldConferenceAcceptAuxVideoFromUser:(id)arg1;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferenceHasTimedOut;
- (void)conferenceHasVideoError;
- (void)conferencePersonWithID:(id)arg1 hasInfoForNoPackets:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 hasInfoForInsufficientBandwidth:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didDegrade:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didCancel:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didConnect:(BOOL)arg2;
- (void)conferenceHungUpByPersonWithID:(id)arg1;
- (void)conferencePersonWithID:(id)arg1 completedWithInfo:(id)arg2;
- (void)_unknownParty:(id)arg1 muteOrPause:(unsigned int)arg2 didChange:(BOOL)arg3;
- (void)_noteConferenceConnected:(id)arg1;
- (void)_unknownParty:(id)arg1 didConnect:(BOOL)arg2;
- (void)_relayPropose:(id)arg1;
- (void)startVCOnMainThread:(id)arg1;
- (void)_setFirstFrameTimeoutTimer;
- (void)_breakBeforeMakeTimer:(id)arg1;
- (void)_firstFrameTimeout:(id)arg1;
- (void)_invitationTimeout:(id)arg1;
- (void)_connectionTimeout:(id)arg1;
- (void)setConnectionTimeoutTime:(double)arg1;
- (double)connectionTimeoutTime;
- (void)setInvitationTimeoutTime:(double)arg1;
- (double)invitationTimeoutTime;
- (void)_setConnectionTimeoutTimer;
- (void)_setInvitationTimeoutTimer;
- (void)setLockCamera:(BOOL)arg1;
- (BOOL)lockCamera;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize { float x1; float x2; })arg8;
- (BOOL)canUseRelay;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void*)localVideoBackLayer;
- (BOOL)closeCamera;
- (BOOL)startPreviewWithError:(id*)arg1;
- (void)setCameraOrientation:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)_setBreakBeforeMakeTimer;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)_reduceInvitationTimeoutTime;
- (void)_setPingTestResults:(id)arg1;
- (unsigned int)addStatus;
- (int)addableParticipants;
- (void)_setDateEnded:(id)arg1;
- (void)_setConferenceController:(id)arg1;
- (id)_conferenceController;
- (void)_setGUID:(id)arg1;
- (BOOL)dataIn;
- (BOOL)dataOut;
- (void)_setIsCaller:(BOOL)arg1;
- (void)_setIsCounterProposalConnect:(BOOL)arg1;
- (BOOL)_isCounterProposalConnect;
- (void)_setSuppressBeginChat:(BOOL)arg1;
- (BOOL)suppressBeginChat;
- (void)_setParticipantOrderFinal:(BOOL)arg1;
- (BOOL)participantOrderFinal;
- (void)_setIsAudioInterrupted:(BOOL)arg1;
- (void)_setIsVideoInterrupted:(BOOL)arg1;
- (void)_setDataDownloaded:(id)arg1;
- (id)_dataDownloaded;
- (void)_setDataUploaded:(id)arg1;
- (id)_dataUploaded;
- (void)_setDataRate:(id)arg1;
- (void)_setBackCameraCaptureTime:(id)arg1;
- (void)_setFrontCameraCaptureTime:(id)arg1;
- (void)_setInterruptionBegan:(id)arg1;
- (id)_interruptionBegan;
- (void)_setUsingCoercedIDs:(BOOL)arg1;
- (BOOL)_usingCoercedIDs;
- (void)_setHasPendingAccept:(BOOL)arg1;
- (BOOL)_hasPendingAccept;
- (void)_setHasPendingInit:(BOOL)arg1;
- (BOOL)_hasPendingInit;
- (BOOL)_isTeminating;
- (void)_setConnectData:(id)arg1;
- (id)_connectData;
- (void)_setIsListening:(BOOL)arg1;
- (BOOL)_isListening;
- (void)_setIsVideo:(BOOL)arg1;
- (void)_setNeedsVideoRestart:(BOOL)arg1;
- (BOOL)_needsVideoRestart;
- (void)_setNeedsAudioRestart:(BOOL)arg1;
- (BOOL)_needsAudioRestart;
- (void)_setRemoteNetworkConnectionType:(unsigned int)arg1;
- (void)_setLocalNetworkConnectionType:(unsigned int)arg1;
- (void)_setNatType:(id)arg1;
- (void)_setInitiatorIMHandle:(id)arg1;
- (void)_setSessionID:(unsigned int)arg1;
- (BOOL)isQ8IrisOpen;
- (void)_setCallStatisticsGUID:(id)arg1;
- (id)_callStatisticsGUID;
- (void)_setConnectionType:(int)arg1;
- (void)_setQueue:(id)arg1;
- (id)_queue;
- (void)_noteFirstFrame;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_setErrorDictionary:(id)arg1;
- (id)errorDictionary;
- (BOOL)isConferenceSilent;
- (void)_setLocalParticipant:(id)arg1;
- (void)_setParticipants:(id)arg1;
- (void)_setAddableParticipants:(int)arg1;
- (void)_setAddStatus:(unsigned int)arg1;
- (void)_setQ8IrisOpen:(BOOL)arg1;
- (void)_setDataIn:(BOOL)arg1;
- (void)_setDataOut:(BOOL)arg1;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (id)participantNames;
- (void)handleVideoConferenceNotification:(id)arg1;
- (void)_inviteeInfoChanged:(id)arg1;
- (void)_counterPropose:(id)arg1;
- (void)sendARDFileTransferAuthorization:(id)arg1 to:(id)arg2;
- (void)invite:(id)arg1;
- (void)inviteAll;
- (void)endChatWithError:(int)arg1;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (void)systemDidFastUserSwitchOut;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemWillShutdown;
- (void)_setStateDisconnected;
- (id)dateEnded;
- (id)dateConnected;
- (id)_participantMatchingVCPartyID:(id)arg1;
- (void)_updateParticipantsWithData:(id)arg1;
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(BOOL)arg4;
- (void)__responseToVCInvite:(id)arg1;
- (void)_threadedPrepareConnectionForInvitedParty:(id)arg1;
- (BOOL)_checkVCResponseDict:(id)arg1;
- (void)_mainThreadFinishPrepareConnectionForInvitedParty:(id)arg1;
- (void)_prepareConnectionForParticipant:(id)arg1;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_connectTo:(id)arg1 withData:(id)arg2;
- (int)endedError;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)invalidateParticipantNames;
- (void)_refreshAddableStatus;
- (void)_sendVCUpdateTo:(id)arg1 skipConnected:(BOOL)arg2;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isStateFinal;
- (void)_vccInitDidFinish:(id)arg1;
- (void)setMute:(BOOL)arg1;
- (void)_setActiveConference;
- (void)_postStateToDelegateIfNecessary;
- (void)_sendEndCallMetricWithReason:(unsigned int)arg1 andError:(int)arg2;
- (BOOL)_isCallUpgrade;
- (BOOL)_isAudioInterrupted;
- (BOOL)_isVideoInterrupted;
- (id)_pingTestResults;
- (id)_backCameraCaptureTime;
- (id)_frontCameraCaptureTime;
- (id)_connectDuration;
- (id)_relayConnectDuration;
- (int)_connectionType;
- (BOOL)_usesRelay;
- (unsigned int)_localNetworkConnectionType;
- (unsigned int)_remoteNetworkConnectionType;
- (id)_remoteNatType;
- (id)_currentNatType;
- (id)_natType;
- (id)_callDuration;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)_reallyEndChatWithError:(id)arg1;
- (void)_clearBreakBeforeMakeTimer;
- (void)_clearInvitationTimeoutTimer;
- (void)_clearFirstFrameTimeoutTimer;
- (void)_clearConnectionTimeoutTimer;
- (void)_setCallerProperties:(id)arg1;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 video:(BOOL)arg4 extraProperties:(id)arg5;
- (void)_entitlementsChanged:(id)arg1;
- (void)_airplaneModeChanged:(id)arg1;
- (void)_determineDataIn;
- (int)_initialRelayStatus;
- (void)_initiatorInfoChanged:(id)arg1;
- (id)initiatorParticipant;
- (BOOL)_participantsCheckOut;
- (void)_initParticipantsWithNuggets:(id)arg1;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (void)_setCreationDate;
- (void)setLocalAspectRatio:(struct CGSize { float x1; float x2; })arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleAVError:(id)arg1;
- (id)initiatorIMHandle;
- (unsigned int)endedReason;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (void)_participantsChanged:(id)arg1;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_responseToVCInvite:(id)arg1;
- (void)_VCCounterProposal:(id)arg1;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (void)endChat;
- (void)cancelInvitation;
- (void)beginChat;
- (void)_setIsCallUpgrade:(BOOL)arg1;
- (void)_setConferenceID:(id)arg1;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (BOOL)openCamera;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)remoteParticipants;
- (id)otherIMHandle;
- (BOOL)isSendingVideo;
- (BOOL)isSendingAudio;
- (id)_extraServerContext;
- (id)callerProperties;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (id)inviteesInfoAsPlist:(BOOL)arg1 account:(id)arg2;
- (id)dateCreated;
- (id)account;
- (unsigned int)cameraOrientation;
- (BOOL)isPaused;
- (id)GUID;
- (unsigned int)cameraType;

@end