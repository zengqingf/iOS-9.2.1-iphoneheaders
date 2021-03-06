/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface _CSIRenditionBlockData : NSObject {

	unsigned _dataPixelFormat;
	int _pixelFormat;
	char* _data;
	unsigned _nrows;
	unsigned long long _rowbytes;
	char _name[128];
	unsigned char _imageBlockReleaseCount;
	unsigned _mmappedData : 1;
	unsigned long long _sourceRowbytes;
	unsigned _allocateMemory : 1;

}
+(id)sharedCache;
-(unsigned long long)rowbytes;
-(void)_allocateImageBytes;
-(void)_freeImageBytes;
-(void)_makeReadOnly;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 sourceRowbytes:(unsigned long long)arg3 pixelFormat:(int)arg4 ;
-(id)initWithBytes:(void*)arg1 pixelWidth:(unsigned)arg2 pixelHeight:(unsigned)arg3 sourceRowbytes:(unsigned long long)arg4 pixelFormat:(int)arg5 ;
-(void)updateFromCSIHeader:(const csiheader*)arg1 ;
-(unsigned)nrows;
-(BOOL)wasUsedTransiently;
-(void)tallyImageBlockRelease;
-(void)expandCSIBitmapData:(csibitmap*)arg1 fromSlice:(slice)arg2 makeReadOnly:(BOOL)arg3 ;
-(void)dealloc;
-(const char*)bytes;
-(int)pixelFormat;
@end

