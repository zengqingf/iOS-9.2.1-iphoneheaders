/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Accounts/DataclassOwners/News.bundle/News
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCFileCoordinatedDictionary;

@interface FRFileCoordinatedAccountActionQueue : NSObject {

	FCFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(void)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)peekAtActionTypesWithCompletion:(/*^block*/id)arg1 ;
-(void)setFileCoordinatedDictionary:(FCFileCoordinatedDictionary *)arg1 ;
-(FCFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)enqueueActionWithType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)readLocalDataHintWithAccessor:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
@end
