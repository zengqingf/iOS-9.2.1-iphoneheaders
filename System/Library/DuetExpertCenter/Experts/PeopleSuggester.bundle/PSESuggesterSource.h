/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PSESource.h>

@protocol _CDInteractionQuerying, _CDInteractionAdvising;
@class _CDPeopleSuggester;

@interface PSESuggesterSource : PSESource {

	id<_CDInteractionQuerying> _querier;
	id<_CDInteractionAdvising> _advisor;
	_CDPeopleSuggester* _suggester;

}

@property (nonatomic,readonly) id<_CDInteractionQuerying> querier;              //@synthesize querier=_querier - In the implementation block
@property (nonatomic,readonly) id<_CDInteractionAdvising> advisor;              //@synthesize advisor=_advisor - In the implementation block
@property (nonatomic,readonly) _CDPeopleSuggester * suggester;                  //@synthesize suggester=_suggester - In the implementation block
+(id)sharedInstance;
-(void)_constrainMechanismForConsumer:(unsigned long long)arg1 ;
-(void)_receiveSourceChanged:(id)arg1 ;
-(id<_CDInteractionQuerying>)querier;
-(id)peopleWithLimit:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(id)_suggestGivenCurrentContextLimitedTo:(unsigned long long)arg1 ;
-(id<_CDInteractionAdvising>)advisor;
-(_CDPeopleSuggester *)suggester;
-(void)_setupSuggester;
-(id)init;
@end

