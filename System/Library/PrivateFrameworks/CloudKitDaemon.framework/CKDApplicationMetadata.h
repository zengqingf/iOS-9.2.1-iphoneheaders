/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKDApplicationMetadata : NSObject {

	BOOL _isCKSystemService;
	NSString* _apsEnvironmentString;
	long long _isApplication;

}

@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (assign,nonatomic) long long isApplication;                      //@synthesize isApplication=_isApplication - In the implementation block
@property (assign,nonatomic) BOOL isCKSystemService;                       //@synthesize isCKSystemService=_isCKSystemService - In the implementation block
-(id)init;
-(long long)isApplication;
-(void)setIsApplication:(long long)arg1 ;
-(NSString *)apsEnvironmentString;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(BOOL)isCKSystemService;
-(void)setIsCKSystemService:(BOOL)arg1 ;
@end
