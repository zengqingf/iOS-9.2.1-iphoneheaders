/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject;

@interface TSCECellCoordinateVector : NSObject {

	vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> >* mCellCoordinates;
	NSObject*<OS_dispatch_semaphore> mSem;

}
-(void)addCellCoordinate:(SCD_Struct_TS315)arg1 ;
-(vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> >*)cellCoordinates;
-(void)removeAllCellCoordinates;
-(void)dealloc;
-(id)init;
-(void)saveToArchive:(CellCoordinateVectorArchive*)arg1 ;
-(id)initWithArchive:(const CellCoordinateVectorArchive*)arg1 ;
@end
