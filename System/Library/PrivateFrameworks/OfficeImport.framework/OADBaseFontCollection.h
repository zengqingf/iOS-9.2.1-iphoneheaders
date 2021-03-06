/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OADBaseFontCollection : NSObject {

	NSString* _latinFont;
	NSString* _eastAsianFont;
	NSString* _complexScriptFont;

}

@property (nonatomic,copy) NSString * latinFont;                      //@synthesize latinFont=_latinFont - In the implementation block
@property (nonatomic,copy) NSString * eastAsianFont;                  //@synthesize eastAsianFont=_eastAsianFont - In the implementation block
@property (nonatomic,copy) NSString * complexScriptFont;              //@synthesize complexScriptFont=_complexScriptFont - In the implementation block
-(void)dealloc;
-(BOOL)isEmpty;
-(NSString *)latinFont;
-(id)baseFontForId:(int)arg1 ;
-(NSString *)eastAsianFont;
-(void)setComplexScriptFont:(NSString *)arg1 ;
-(NSString *)complexScriptFont;
-(void)setLatinFont:(NSString *)arg1 ;
-(void)setEastAsianFont:(NSString *)arg1 ;
-(void)setBaseFont:(id)arg1 forId:(int)arg2 ;
-(BOOL)isEqualToBaseFontCollection:(id)arg1 ;
@end

