/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class NSArray;

@interface BoxedPhysicsShape : NSObject {

	int shapeType;
	NSArray* points;

}
+(id)boxPhysicsShape:(PKPhysicsShape*)arg1 ;
-(PKPhysicsShape*)unboxShape;
@end

