/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MKInstructionContents : NSObject {

	int _maneuverType;
	int _transportType;
	NSString* _intersectionName;
	NSString* _destinationName;
	NSString* _exitNumber;
	NSArray* _branchNames;
	NSArray* _towardNames;
	int _junctionAngle;
	BOOL _toFreeway;

}

@property (assign,nonatomic) int maneuverType;                         //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,retain) NSString * intersectionName;              //@synthesize intersectionName=_intersectionName - In the implementation block
@property (nonatomic,retain) NSString * destinationName;               //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,retain) NSString * exitNumber;                    //@synthesize exitNumber=_exitNumber - In the implementation block
@property (nonatomic,retain) NSArray * branchNames;                    //@synthesize branchNames=_branchNames - In the implementation block
@property (nonatomic,retain) NSArray * towardNames;                    //@synthesize towardNames=_towardNames - In the implementation block
@property (assign,nonatomic) int transportType;                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL useRoadName; 
@property (nonatomic,readonly) BOOL useTowardNames; 
@property (nonatomic,readonly) BOOL useIntersectionName; 
@property (nonatomic,readonly) BOOL useDestinationName; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,readonly) NSString * primaryName; 
@property (nonatomic,readonly) BOOL isExitManeuver; 
@property (assign,nonatomic) BOOL toFreeway;                           //@synthesize toFreeway=_toFreeway - In the implementation block
@property (assign,nonatomic) int junctionAngle;                        //@synthesize junctionAngle=_junctionAngle - In the implementation block
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 ;
+(id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2 ;
+(id)contentsWithSubstep:(id)arg1 transportType:(int)arg2 ;
-(id)init;
-(id)description;
-(NSString *)destinationName;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(BOOL)hasName;
-(int)maneuverType;
-(void)setExitNumber:(NSString *)arg1 ;
-(NSString *)exitNumber;
-(void)setManeuverType:(int)arg1 ;
-(void)setToFreeway:(BOOL)arg1 ;
-(BOOL)toFreeway;
-(void)setDestinationName:(NSString *)arg1 ;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(id)_instructionForBranch;
-(id)_instructionForTurn;
-(id)_instructionForRoundabout;
-(void)setTowardNames:(NSArray *)arg1 ;
-(id)_instructionForStart;
-(id)_walkingInstructionForUTurn;
-(BOOL)useTowardNames;
-(int)junctionAngle;
-(id)instruction;
-(id)_instructionForExit;
-(NSString *)intersectionName;
-(id)_walkingInstructionForRoundabout;
-(id)_instructionForUTurn;
-(void)setIntersectionName:(NSString *)arg1 ;
-(void)setBranchNames:(NSArray *)arg1 ;
-(void)_populateFromSubstep:(id)arg1 ;
-(BOOL)useDestinationName;
-(id)_instructionForFerry;
-(BOOL)useIntersectionName;
-(BOOL)useRoadName;
-(id)_stringFromNameInfo:(id)arg1 ;
-(void)_populateFromStep:(id)arg1 ;
-(id)_walkingInstructionForContinue;
-(id)_instructionsForSigns;
-(id)_walkingInstructionForStart;
-(NSString *)primaryName;
-(id)_exitNumberFromNameInfo:(id)arg1 ;
-(id)_instructionForArrival;
-(void)setName:(id)arg1 signposts:(id)arg2 ;
-(BOOL)isExitManeuver;
-(id)_instructionForChangeHighway;
-(NSArray *)towardNames;
-(void)setJunctionAngle:(int)arg1 ;
-(NSArray *)branchNames;
-(id)_instructionForContinue;
-(id)_walkingInstructionForTurn;
@end

