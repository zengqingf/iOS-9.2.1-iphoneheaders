/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEODirectionsFeedback, GEODirectionsFeedbackCollection, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject {

	GEODirectionsFeedback* _currentDirectionsFeedback;
	GEODirectionsFeedbackCollection* _currentFeedbackCollection;
	NSMutableSet* _routeIDs;
	double _currentDirectionsNavigationStartTime;
	double _currentDirectionsNavigationEndTime;

}

@property (nonatomic,retain) GEODirectionsFeedbackCollection * currentFeedbackCollection;              //@synthesize currentFeedbackCollection=_currentFeedbackCollection - In the implementation block
@property (nonatomic,retain) GEODirectionsFeedback * currentDirectionsFeedback;                        //@synthesize currentDirectionsFeedback=_currentDirectionsFeedback - In the implementation block
@property (nonatomic,retain) NSMutableSet * routeIDs;                                                  //@synthesize routeIDs=_routeIDs - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)addTrafficRerouteFeedback:(id)arg1 ;
-(void)setCurrentFeedbackCollection:(GEODirectionsFeedbackCollection *)arg1 ;
-(NSMutableSet *)routeIDs;
-(void)startFeedbackSession;
-(void)setCurrentDirectionsFeedback:(GEODirectionsFeedback *)arg1 ;
-(void)startFeedbackSessionForResponseID:(id)arg1 ;
-(void)_updateFeedbackSessionWithResponseID:(id)arg1 ;
-(GEODirectionsFeedbackCollection *)currentFeedbackCollection;
-(void)endFeedbackSession;
-(void)setAudioFeedback:(SCD_Struct_GE135*)arg1 ;
-(void)addRouteID:(id)arg1 routeIndex:(unsigned)arg2 stepID:(unsigned)arg3 completeStep:(BOOL)arg4 ;
-(void)setRouteIDs:(NSMutableSet *)arg1 ;
-(GEODirectionsFeedback *)currentDirectionsFeedback;
-(void)setupFeedbackSessionWithResponseID:(id)arg1 ;
-(void)setFinalLocation:(id)arg1 asArrival:(BOOL)arg2 ;
@end

