/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BLAlertAction : NSObject {

	/*^block*/id _block;
	NSString* _name;

}

@property (readonly) id block;                     //@synthesize block=_block - In the implementation block
@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)cancelAction;
+(id)actionWithName:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(NSString *)name;
-(id)block;
-(id)initWithName:(id)arg1 andBlock:(/*^block*/id)arg2 ;
@end

