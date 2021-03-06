/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STTemperature, NSNumber;

@interface STWeatherAttributes : STSiriModelObject {

	long long _condition;
	STTemperature* _temperature;
	STTemperature* _highTemperature;
	STTemperature* _lowTemperature;
	NSNumber* _chanceOfPrecipitation;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)condition;
-(id)temperature;
-(id)highTemperature;
-(id)lowTemperature;
-(id)chanceOfPrecipitation;
-(id)_initWithCondition:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 chanceOfPrecipitation:(id)arg5 ;
@end

