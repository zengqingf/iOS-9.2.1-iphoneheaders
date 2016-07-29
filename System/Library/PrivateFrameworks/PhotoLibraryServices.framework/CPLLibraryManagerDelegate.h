/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLLibraryManagerDelegate <NSObject>
@optional
-(void)libraryManagerDidChangeConfiguration:(id)arg1;
-(id)displayableName;

@required
-(void)libraryManagerStatusDidChange:(id)arg1;
-(void)libraryManagerDidStartSynchronization:(id)arg1;
-(void)libraryManagerHasChangesToPull:(id)arg1;

@end
