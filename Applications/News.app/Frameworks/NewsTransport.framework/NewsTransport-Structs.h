/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned articleType : 1;
	unsigned backendArticleVersion : 1;
	unsigned feedCellSection : 1;
	unsigned feedType : 1;
	unsigned galleryImageCount : 1;
	unsigned galleryType : 1;
	unsigned mediaType : 1;
	unsigned publisherArticleVersion : 1;
	unsigned adSupportedChannel : 1;
	unsigned isDigitalReplicaAd : 1;
	unsigned isUserSubscribedToFeed : 1;
} SCD_Struct_NT1;

typedef struct {
	unsigned segmentsHistoryWindowInterval : 1;
	unsigned segmentsMinimumArticleCount : 1;
	unsigned segmentsSubmissionFrequency : 1;
	unsigned segmentsThreshold : 1;
	unsigned segmentsEnabled : 1;
} SCD_Struct_NT2;

typedef struct {
	unsigned articleType : 1;
	unsigned backendArticleVersion : 1;
	unsigned feedCellSection : 1;
	unsigned feedType : 1;
	unsigned galleryType : 1;
	unsigned mediaType : 1;
	unsigned publisherArticleVersion : 1;
	unsigned adSupportedChannel : 1;
	unsigned isDigitalReplicaAd : 1;
	unsigned isUserSubscribedToFeed : 1;
} SCD_Struct_NT3;

typedef struct {
	unsigned version : 1;
} SCD_Struct_NT4;

typedef struct {
	unsigned articleType : 1;
	unsigned backendArticleVersion : 1;
	unsigned feedCellSection : 1;
	unsigned feedType : 1;
	unsigned mediaType : 1;
	unsigned publisherArticleVersion : 1;
	unsigned adSupportedChannel : 1;
	unsigned isDigitalReplicaAd : 1;
	unsigned isUserSubscribedToFeed : 1;
} SCD_Struct_NT5;

typedef struct {
	unsigned mediaPausePosition : 1;
	unsigned mediaResumePosition : 1;
	unsigned mediaResumeTimePlayed : 1;
	unsigned mediaTimePlayed : 1;
	unsigned articleType : 1;
	unsigned backendArticleVersion : 1;
	unsigned feedCellSection : 1;
	unsigned feedType : 1;
	unsigned mediaPauseMethod : 1;
	unsigned mediaPlayLocation : 1;
	unsigned mediaPlayMethod : 1;
	unsigned mediaResumeMethod : 1;
	unsigned mediaType : 1;
	unsigned publisherArticleVersion : 1;
	unsigned userAction : 1;
	unsigned adSupportedChannel : 1;
	unsigned isDigitalReplicaAd : 1;
	unsigned isUserSubscribedToFeed : 1;
} SCD_Struct_NT6;

typedef struct {
	unsigned resultType : 1;
	unsigned totalChannelSelections : 1;
	unsigned totalResets : 1;
	unsigned totalTopicSelections : 1;
	unsigned icloudAccountMatch : 1;
	unsigned sawEmailOptIn : 1;
} SCD_Struct_NT7;

typedef struct {
	unsigned lastAppSessionTimestamp : 1;
	unsigned channelSubscriptionCount : 1;
	unsigned topicSubscriptionCount : 1;
} SCD_Struct_NT8;

typedef struct {
	unsigned activeTimeSpent : 1;
	unsigned articleHostViewType : 1;
	unsigned articleType : 1;
	unsigned articleViewPresentationReason : 1;
	unsigned backendArticleVersion : 1;
	unsigned characterCount : 1;
	unsigned displayRank : 1;
	unsigned feedCellHostType : 1;
	unsigned feedPresentationReason : 1;
	unsigned maxActiveTimeSpent : 1;
	unsigned parentFeedType : 1;
	unsigned previousArticleHostViewTypeIfSwipe : 1;
	unsigned publisherArticleVersion : 1;
	unsigned adSupportedChannel : 1;
	unsigned didBounce : 1;
	unsigned didOpenInSafari : 1;
	unsigned isDigitalReplicaAd : 1;
	unsigned isExplorationArticle : 1;
	unsigned isNewUserToArticle : 1;
	unsigned isUserSubscribedToParentFeed : 1;
} SCD_Struct_NT9;

typedef struct {
	unsigned discoveryWidgetExposureViewType : 1;
	unsigned feedType : 1;
} SCD_Struct_NT10;

typedef struct {
	unsigned appBuild : 1;
	unsigned lastAppOpenDate : 1;
	unsigned userStartDate : 1;
	unsigned cellularRadioAccessTechnology : 1;
	unsigned osInstallVariant : 1;
	unsigned reachabilityStatus : 1;
	unsigned textSize : 1;
	unsigned utcOffset : 1;
	unsigned isNewUser : 1;
	unsigned runningObsolete : 1;
	unsigned signedIntoIcloud : 1;
	unsigned upgradedFromObsolete : 1;
} SCD_Struct_NT11;

typedef struct {
	unsigned displayRank : 1;
	unsigned feedCellHostType : 1;
	unsigned feedCellSection : 1;
	unsigned feedType : 1;
	unsigned feedViewPresentationReason : 1;
	unsigned subscribeUnsubscribeLocation : 1;
	unsigned userAction : 1;
} SCD_Struct_NT12;

typedef struct {
	unsigned decreaseConsumptionThreshold : 1;
	unsigned evaluationFrequency : 1;
	unsigned historyLength : 1;
	unsigned increaseConsumptionThreshold : 1;
	unsigned minimumArticleCount : 1;
	unsigned defaultChannelBin : 1;
	unsigned defaultTopicBin : 1;
	unsigned enabled : 1;
} SCD_Struct_NT13;

typedef struct {
	unsigned feedType : 1;
	unsigned muteUnmuteLocation : 1;
	unsigned userAction : 1;
	unsigned isUserSubscribedToFeed : 1;
} SCD_Struct_NT14;

typedef struct {
	unsigned borderSpecification : 1;
	unsigned columnSpan : 1;
	unsigned imagePosition : 1;
	unsigned rowSpan : 1;
	unsigned accessoryViewHeight : 1;
	unsigned accessoryViewWidth : 1;
	unsigned accessoryViewX : 1;
	unsigned accessoryViewY : 1;
	unsigned backgroundColorInsetBottom : 1;
	unsigned backgroundColorInsetLeft : 1;
	unsigned backgroundColorInsetRight : 1;
	unsigned backgroundColorInsetTop : 1;
	unsigned bylineFontSize : 1;
	unsigned cellType : 1;
	unsigned contentInsetBottom : 1;
	unsigned contentInsetLeft : 1;
	unsigned contentInsetRight : 1;
	unsigned contentInsetTop : 1;
	unsigned excerptFontSize : 1;
	unsigned excerptFrameHeight : 1;
	unsigned excerptFrameWidth : 1;
	unsigned excerptFrameX : 1;
	unsigned excerptFrameY : 1;
	unsigned excerptLineHeight : 1;
	unsigned imageViewFrameHeight : 1;
	unsigned imageViewFrameWidth : 1;
	unsigned imageViewFrameX : 1;
	unsigned imageViewFrameY : 1;
	unsigned layoutType : 1;
	unsigned logoImageFrameHeight : 1;
	unsigned logoImageFrameWidth : 1;
	unsigned logoImageFrameX : 1;
	unsigned logoImageFrameY : 1;
	unsigned subtitleFontSize : 1;
	unsigned subtitleFrameHeight : 1;
	unsigned subtitleFrameWidth : 1;
	unsigned subtitleFrameX : 1;
	unsigned subtitleFrameY : 1;
	unsigned subtitleLineHeight : 1;
	unsigned textAlignment : 1;
	unsigned titleFontSize : 1;
	unsigned titleFrameHeight : 1;
	unsigned titleFrameWidth : 1;
	unsigned titleFrameX : 1;
	unsigned titleFrameY : 1;
	unsigned titleLineHeight : 1;
	unsigned verticalWhitespace : 1;
	unsigned hasVideo : 1;
} SCD_Struct_NT15;
