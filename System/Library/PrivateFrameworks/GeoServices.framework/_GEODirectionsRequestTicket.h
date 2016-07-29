/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODirectionServiceTicket.h>

@class GEODirectionsRouteRequest, GEOComposedRoute, NSDictionary, NSString;

@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket> {

	GEODirectionsRouteRequest* _request;
	BOOL _isReroute;
	GEOComposedRoute* _originalRoute;
	BOOL _active;
	BOOL _canceled;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL isReroute;                                     //@synthesize isReroute=_isReroute - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * originalRoute;                   //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,readonly) BOOL active;                                      //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                                    //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEODirectionsRouteRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(GEODirectionsRouteRequest *)request;
-(BOOL)active;
-(id)initWithRequest:(id)arg1 ;
-(void)setOriginalRoute:(GEOComposedRoute *)arg1 ;
-(GEOComposedRoute *)originalRoute;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(NSDictionary *)responseUserInfo;
-(BOOL)canceled;
-(void)setIsReroute:(BOOL)arg1 ;
-(BOOL)isReroute;
@end
