/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPTransitionManager : NSObject {

	NSMutableDictionary* mTransitions;
	NSMutableDictionary* mTransitionCategories;
	NSMutableDictionary* mTransitionPresets;

}
+(void)loadTransitionManagerWithPaths:(id)arg1 ;
+(void)releaseSharedManager;
+(id)sharedManager;
-(id)initWithPaths:(id)arg1 ;
-(double)beatStrengthForTransitionID:(id)arg1 ;
-(long long)transitionNeedsRandomSeedInformation:(id)arg1 ;
-(id)constraintsForTransitionPresetsMatchingList:(id)arg1 andCriteria:(id)arg2 ;
-(id)randomTransitionPresetFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(double)bestBeatTimeForTransitionID:(id)arg1 ;
-(id)transitionPresetsMatchingCriteria:(id)arg1 ;
-(id)allTransitionIDs;
-(id)descriptionForTransitionID:(id)arg1 ;
-(id)attributesForTransitionID:(id)arg1 andPresetID:(id)arg2 ;
-(id)categoryIDsForTransitionID:(id)arg1 ;
-(id)transitionsForCategoryID:(id)arg1 ;
-(id)settingsUIControlDescriptionsForTransition:(id)arg1 ;
-(id)versionOfTransitionID:(id)arg1 ;
-(double)defaultDurationForTransitionID:(id)arg1 ;
-(id)localizedNameForTransitionID:(id)arg1 withLanguage:(id)arg2 ;
-(id)localizedTransitionNameForTransitionID:(id)arg1 andPresetID:(id)arg2 ;
-(id)localizedCategoryNameFromCategoryID:(id)arg1 ;
-(id)localizedSettingsUITitleForTitleKey:(id)arg1 inTransition:(id)arg2 ;
-(id)controlForAttribute:(id)arg1 forTransitionID:(id)arg2 ;
-(id)presetsForTransitionID:(id)arg1 ;
-(id)allCategoryIDs;
-(id)localizedTransitionNameForTransitionID:(id)arg1 ;
-(void)dealloc;
@end
