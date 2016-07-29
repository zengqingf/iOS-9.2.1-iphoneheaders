/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICCameraFile, NSDictionary, NSString;

@interface PLCameraImportItemRepresentation : NSObject {

	ICCameraFile* _cameraFile;
	NSDictionary* _metadata;
	BOOL _canRequestMetadata;
	BOOL _canRequestThumbnail;
	NSString* _path;
	BOOL _inDatabase;

}

@property (nonatomic,retain) ICCameraFile * cameraFile;              //@synthesize cameraFile=_cameraFile - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL canRequestMetadata;                //@synthesize canRequestMetadata=_canRequestMetadata - In the implementation block
@property (assign,nonatomic) BOOL canRequestThumbnail;               //@synthesize canRequestThumbnail=_canRequestThumbnail - In the implementation block
@property (nonatomic,copy) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) BOOL inDatabase;                        //@synthesize inDatabase=_inDatabase - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)fileExtension;
-(void)setCameraFile:(ICCameraFile *)arg1 ;
-(void)setInDatabase:(BOOL)arg1 ;
-(ICCameraFile *)cameraFile;
-(BOOL)isRaw;
-(id)initWithCameraFile:(id)arg1 ;
-(void)setCanRequestMetadata:(BOOL)arg1 ;
-(void)setCanRequestThumbnail:(BOOL)arg1 ;
-(BOOL)inDatabase;
-(BOOL)isJPEG;
-(BOOL)canRequestThumbnail;
-(BOOL)isInDatabaseForce:(BOOL)arg1 ;
-(BOOL)isMovie;
-(BOOL)canRequestMetadata;
-(BOOL)isAudio;
-(NSDictionary *)metadata;
@end
