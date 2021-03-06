/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSUDownloadTaskProgress : NSObject {

	BOOL _isActive;
	long long _totalBytesDownloaded;
	long long _totalBytesExpectedToBeDownloaded;

}

@property (assign,nonatomic) BOOL isActive;                                           //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) long long totalBytesDownloaded;                          //@synthesize totalBytesDownloaded=_totalBytesDownloaded - In the implementation block
@property (assign,nonatomic) long long totalBytesExpectedToBeDownloaded;              //@synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded - In the implementation block
-(long long)totalBytesExpectedToBeDownloaded;
-(void)setTotalBytesExpectedToBeDownloaded:(long long)arg1 ;
-(void)setTotalBytesDownloaded:(long long)arg1 ;
-(long long)totalBytesDownloaded;
-(id)description;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
@end

