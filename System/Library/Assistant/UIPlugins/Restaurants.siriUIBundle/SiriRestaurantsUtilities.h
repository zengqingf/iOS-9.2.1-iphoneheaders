/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumberFormatter, NSDateFormatter;

@interface SiriRestaurantsUtilities : NSObject {

	NSNumberFormatter* _distanceFormatter;
	NSDateFormatter* _dateFormatter;

}
+(id)sharedUtilities;
-(id)displayStringForCategories:(id)arg1 ;
-(id)formattedInteger:(long long)arg1 ;
-(id)configuredMediumLabelWithFontSize:(double)arg1 ;
-(id)timeDisplayStringForDate:(id)arg1 inTimeZone:(id)arg2 hideMinutes:(BOOL)arg3 ;
-(id)_formattedDistanceForValue:(id)arg1 ;
-(id)_disabledTextColor;
-(id)displayStringForEnDash;
-(long long)calendarUnitWeekdayForSiriWeekday:(id)arg1 ;
-(id)siriOrderedWeekdays;
-(void)getTimeUntilNextRangeBoundaryFromHours:(id)arg1 inTimeZone:(id)arg2 timeInterval:(double*)arg3 isEndBoundary:(BOOL*)arg4 ;
-(id)yelpPunchOutForRestaurant:(id)arg1 action:(long long)arg2 ;
-(id)openTableAppPunchOut;
-(id)websiteImage;
-(id)_yelpBizIdForRestaurant:(id)arg1 ;
-(id)_yelp6URLForRestaurant:(id)arg1 action:(long long)arg2 objectIdentifier:(id)arg3 ;
-(id)_oldYelpURLWithPrefix:(id)arg1 forRestaurant:(id)arg2 ;
-(id)_yelpPunchOutForRestaurant:(id)arg1 action:(long long)arg2 objectIdentifier:(id)arg3 ;
-(id)_openTableBundleId;
-(id)displayStringForDistance:(id)arg1 ;
-(id)timeComponentsForOpenings:(id)arg1 ;
-(id)displayStringForReviewCount:(long long)arg1 provider:(id)arg2 ;
-(id)displayStringForLocation:(id)arg1 ;
-(id)displayStringPriceRangeForRestaurant:(id)arg1 ;
-(id)configuredLightLabelWithFontSize:(double)arg1 ;
-(id)displayStringForPhotoCount:(long long)arg1 ;
-(BOOL)deviceHasTelephony;
-(id)displayStringForReviewCount:(long long)arg1 ;
-(id)siriWeekdayForCalendarUnitWeekday:(long long)arg1 ;
-(void)getStartSeconds:(double*)arg1 endSeconds:(double*)arg2 fromPeriod:(id)arg3 ;
-(id)applePayImage;
-(id)displayStringForOpenStatus:(long long)arg1 timeInterval:(double)arg2 ;
-(id)displayStringForPeriod:(id)arg1 openStatus:(id)arg2 ;
-(id)localizedStringForKey:(id)arg1 ;
-(id)dateFormatter;
-(id)phoneImage;
@end

