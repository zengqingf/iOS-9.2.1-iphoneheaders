/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKURLHandlerDelegate;
@interface _MKURLHandler : NSObject {

	id<_MKURLHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKURLHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned char)_MKGetURLSchemeTypeFor:(id)arg1 ;
-(void)setDelegate:(id<_MKURLHandlerDelegate>)arg1 ;
-(id<_MKURLHandlerDelegate>)delegate;
-(BOOL)_handleMapItems:(id)arg1 withOptions:(id)arg2 urlScheme:(id)arg3 sourceApplication:(id)arg4 originIsActiveWatch:(BOOL)arg5 ;
-(BOOL)_handleMapItemURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(BOOL)arg3 ;
-(BOOL)handleURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(BOOL)arg3 ;
-(void)_treatMapTypeFrom:(id)arg1 ;
-(BOOL)_treatRegionFrom:(id)arg1 ;
-(BOOL)_handleSharedMapURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(BOOL)arg3 ;
-(BOOL)_treatSearchRegionFrom:(id)arg1 ;
-(BOOL)_treatNavigationDirectionsFrom:(id)arg1 ;
-(BOOL)_handleMapItemHandlesURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(BOOL)arg3 ;
-(BOOL)_treatSearchFrom:(id)arg1 ;
-(void)_treatGenericOptionsFrom:(id)arg1 ;
-(BOOL)_handleMapsURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(BOOL)arg3 ;
-(BOOL)_treatContentProvider:(id)arg1 ;
-(BOOL)_treatPinPositionFrom:(id)arg1 ;
-(void)_treatTrackingModeFrom:(id)arg1 ;
@end

