/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKRandomSource.h>

@class NSData;

@interface GKARC4RandomSource : GKRandomSource {

	Arc4State* _state;
	NSData* _seed;

}

@property (nonatomic,copy) NSData * seed; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)seed;
-(id)initWithSeed:(id)arg1 ;
-(unsigned long long)nextBits:(int)arg1 ;
-(long long)nextInt;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(float)nextUniform;
-(BOOL)nextBool;
-(void)dropValuesWithCount:(unsigned long long)arg1 ;
-(void)setSeed:(NSData *)arg1 ;
@end

