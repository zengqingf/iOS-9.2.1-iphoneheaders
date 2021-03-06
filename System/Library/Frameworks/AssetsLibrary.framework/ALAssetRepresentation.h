/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : NSObject {

	id _internal;
	BOOL _ignoreRead;

}

@property (nonatomic,retain) ALAssetRepresentationPrivate * internal;              //@synthesize internal=_internal - In the implementation block
@property (assign) BOOL ignoreRead;                                                //@synthesize ignoreRead=_ignoreRead - In the implementation block
+(void)_enableImageDataUsesMap;
-(long long)size;
-(void)dealloc;
-(id)description;
-(id)url;
-(long long)orientation;
-(BOOL)isValid;
-(float)scale;
-(id)UTI;
-(CGSize)dimensions;
-(CGImageRef)fullResolutionImage;
-(unsigned long long)getBytes:(char*)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id*)arg4 ;
-(CGImageRef)fullScreenImage;
-(int)_fileDescriptor;
-(id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4 ;
-(BOOL)ignoreRead;
-(id)_imageData;
-(CGImageRef)CGImageWithOptions:(id)arg1 format:(int)arg2 bakeInOrientation:(int)arg3 ;
-(CGImageRef)CGImageWithOptions:(id)arg1 ;
-(CGImageRef)_largeDisplayableImageForFormat:(int)arg1 ;
-(void)setIgnoreRead:(BOOL)arg1 ;
-(void)setInternal:(ALAssetRepresentationPrivate *)arg1 ;
-(ALAssetRepresentationPrivate *)internal;
-(id)metadata;
-(id)filename;
-(CGImageRef)zoomableDisplayImage;
@end

