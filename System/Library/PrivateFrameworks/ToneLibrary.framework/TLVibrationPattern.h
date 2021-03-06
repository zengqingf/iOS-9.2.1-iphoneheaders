/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TLVibrationPattern : NSObject {

	id _contextObject;
	double _duration;
	id _propertyListRepresentation;
	id _complexPatternDescription;

}

@property (nonatomic,readonly) id propertyListRepresentation; 
@property (nonatomic,retain) id contextObject;                                                                   //@synthesize contextObject=_contextObject - In the implementation block
@property (nonatomic,readonly) id _artificiallyRepeatingPropertyListRepresentation; 
@property (assign,setter=_setDuration:,nonatomic) double _duration;                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double _computedDuration; 
@property (setter=_setPropertyListRepresentation:,nonatomic,retain) id _propertyListRepresentation;              //@synthesize propertyListRepresentation=_propertyListRepresentation - In the implementation block
@property (setter=_setComplexPatternDescription:,nonatomic,retain) id _complexPatternDescription;                //@synthesize complexPatternDescription=_complexPatternDescription - In the implementation block
+(BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1 ;
+(id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1 ;
+(id)noneVibrationPattern;
+(id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2 ;
-(void)dealloc;
-(id)init;
-(double)_duration;
-(void)_setDuration:(double)arg1 ;
-(id)propertyListRepresentation;
-(id)_artificiallyRepeatingPropertyListRepresentation;
-(id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2 ;
-(void)_setPropertyListRepresentation:(id)arg1 ;
-(void)_setComplexPatternDescription:(id)arg1 ;
-(id)_propertyListRepresentation;
-(id)_complexPatternDescription;
-(double)_computedDuration;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2 ;
-(id)contextObject;
-(void)setContextObject:(id)arg1 ;
@end

