/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ISInternationalStatistics : NSObject
+(void)substractScalarValue:(long long)arg1 forKey:(id)arg2 ;
+(void)setScalarValue:(long long)arg1 forKey:(id)arg2 ;
+(id)keyForLanguageUsed:(id)arg1 ;
+(void)setBoolean:(BOOL)arg1 forKey:(id)arg2 ;
+(id)keyForLanguageCount;
+(id)keyForTopLanguage:(id)arg1 AndLocale:(id)arg2 ;
+(id)keyForDeviceLanguage:(id)arg1 ;
+(id)keyForLocaleLanguageMatching;
+(id)keyForReplaceLanguageViaDeviceLanguageSelection;
+(id)keyForReplaceLanguageViaOtherLanguageSelection;
+(void)incrementScalarForKey:(id)arg1 ;
+(void)decrementScalarForKey:(id)arg1 ;
+(void)addScalarValue:(long long)arg1 forKey:(id)arg2 ;
+(void)logInternationalStatistics;
+(id)keyForCalendar:(id)arg1 ;
+(void)clearScalar:(id)arg1 ;
@end

