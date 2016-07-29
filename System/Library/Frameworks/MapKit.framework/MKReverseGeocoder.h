/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class MKReverseGeocoderInternal, MKPlacemark;

@interface MKReverseGeocoder : NSObject {

	MKReverseGeocoderInternal* _internal;

}

@property (assign,nonatomic,__weak) id<MKReverseGeocoderDelegate> delegate; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,readonly) MKPlacemark * placemark; 
@property (getter=isQuerying,nonatomic,readonly) BOOL querying; 
-(void)cancel;
-(void)setDelegate:(id<MKReverseGeocoderDelegate>)arg1 ;
-(id<MKReverseGeocoderDelegate>)delegate;
-(void)start;
-(void)_notifyNoResults;
-(BOOL)isQuerying;
-(MKPlacemark *)placemark;
-(void)_notifyResult:(id)arg1 ;
-(void)_notifyError:(id)arg1 ;
-(void)setCoordinate:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)coordinate;
-(id)initWithCoordinate:(SCD_Struct_MK1)arg1 ;
@end
