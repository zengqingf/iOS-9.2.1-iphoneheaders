/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSAPdfDestination : NSObject {

	NSString* _name;
	CGPoint _point;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGPoint point;                //@synthesize point=_point - In the implementation block
+(id)pdfDestinationWithName:(id)arg1 point:(CGPoint)arg2 ;
-(id)initWithName:(id)arg1 point:(CGPoint)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(CGPoint)point;
@end
