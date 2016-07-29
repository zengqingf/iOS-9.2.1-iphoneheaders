/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSNumber, ManagedApplicationOperationOptions;

@interface ManagedApplicationOperation : ISOperation {

	NSString* _bundleIdentifer;
	NSString* _bundleVersion;
	NSNumber* _externalVersionIdentifier;
	NSString* _itemIdentifier;
	ManagedApplicationOperationOptions* _options;
	BOOL _skipDownload;
	/*^block*/id _detailedResultBlock;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock;                                                     //@synthesize resultBlock=_resultBlock - In the implementation block
@property (copy) id detailedResultBlock;                                             //@synthesize detailedResultBlock=_detailedResultBlock - In the implementation block
@property (copy,readonly) ManagedApplicationOperationOptions * options;              //@synthesize options=_options - In the implementation block
-(id)_postBodyData;
-(BOOL)_updateSinfsAndRecepitsForDownloadResponse:(id)arg1 sinfData:(id)arg2 ;
-(id)_downloadMetadata:(id)arg1 ;
-(void)_dowloadAppsFromDownloadResponse:(id)arg1 ;
-(id)detailedResultBlock;
-(id)getSinf;
-(id)_md5ForAppProxy:(id)arg1 ;
-(void)setDetailedResultBlock:(id)arg1 ;
-(void)run;
-(ManagedApplicationOperationOptions *)options;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)initWithOptions:(id)arg1 ;
@end
