/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class BWIrisMovieInfo;

@interface BWNodeIrisReferenceMovieRequestMessage : BWNodeMessage {

	BWIrisMovieInfo* _irisMovieInfo;

}

@property (readonly) BWIrisMovieInfo * irisMovieInfo; 
+(id)newMessageWithIrisMovieInfo:(id)arg1 ;
-(void)dealloc;
-(BWIrisMovieInfo *)irisMovieInfo;
-(id)_initWithIrisMovieInfo:(id)arg1 ;
@end
