/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ATXTimeHistogram : NSObject <NSSecureCoding> {

	unsigned _count;
	unsigned _capacity;
	SCD_Struct_AT5* _entries;

}

@property (nonatomic,readonly) unsigned count;              //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(void)clear;
-(unsigned short)pointsPerDay;
-(void)addEventWithId:(unsigned)arg1 atLocalTime:(unsigned short)arg2 ;
-(void)addEventWithId:(unsigned)arg1 atLocalTime:(unsigned short)arg2 count:(double)arg3 ;
-(double)computeCountWithEventId:(unsigned)arg1 ;
-(void)removeEventsWithId:(unsigned)arg1 ;
-(double)computeCountWithEventId:(unsigned)arg1 atLocaltime:(unsigned short)arg2 ;
-(double)totalCountsAtLocaltime:(unsigned short)arg1 ;
-(double)totalCounts;
-(void)decayByFactor:(double)arg1 ;
-(void)decayWithHalfLife:(double)arg1 ;
-(void)sortBuckets;
-(id)descriptionWithEventNames:(/*^block*/id)arg1 ;
-(void)computeCounts:(double*)arg1 size:(unsigned)arg2 ;
-(void)computeCounts:(double*)arg1 size:(unsigned)arg2 atLocaltime:(unsigned short)arg3 ;
@end
