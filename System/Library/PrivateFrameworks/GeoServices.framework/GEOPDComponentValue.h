/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDRoadAccessInfo, GEOPDAddress, GEOPDAmenities, GEOPDBounds, GEOPDBusinessClaim, GEOPDCaptionedPhoto, GEOPDEntity, GEOPDETA, GEOPDExternalAction, GEOPDFactoid, GEOPDFlyover, GEOPDHours, GEOPDPhoto, GEOPDPlaceInfo, GEOPDRating, GEOPDRawAttribute, GEOPDResultSnippet, GEOPDReview, GEOStyleAttributes, GEOPDTextBlock, GEOPDTransitAttribution, GEOPDTransitIncident, GEOPDTransitInfo, GEOPDTransitInfoSnippet, GEOPDTransitSchedule;

@interface GEOPDComponentValue : PBCodable <NSCopying> {

	GEOPDRoadAccessInfo* _accessInfo;
	GEOPDAddress* _address;
	GEOPDAmenities* _amenities;
	GEOPDBounds* _bounds;
	GEOPDBusinessClaim* _businessClaim;
	GEOPDCaptionedPhoto* _captionedPhoto;
	GEOPDEntity* _entity;
	GEOPDETA* _eta;
	GEOPDExternalAction* _externalAction;
	GEOPDFactoid* _factoid;
	GEOPDFlyover* _flyover;
	GEOPDHours* _hours;
	GEOPDPhoto* _photo;
	GEOPDPlaceInfo* _placeInfo;
	GEOPDRating* _rating;
	GEOPDRawAttribute* _rawAttribute;
	GEOPDResultSnippet* _resultSnippet;
	GEOPDReview* _review;
	GEOStyleAttributes* _styleAttributes;
	GEOPDTextBlock* _textBlock;
	GEOPDTransitAttribution* _transitAttribution;
	GEOPDTransitIncident* _transitIncident;
	GEOPDTransitInfo* _transitInfo;
	GEOPDTransitInfoSnippet* _transitInfoSnippet;
	GEOPDTransitSchedule* _transitSchedule;

}

@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity;                                      //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo;                                //@synthesize placeInfo=_placeInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessInfo; 
@property (nonatomic,retain) GEOPDRoadAccessInfo * accessInfo;                          //@synthesize accessInfo=_accessInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds;                                      //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOPDAddress * address;                                    //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasRating; 
@property (nonatomic,retain) GEOPDRating * rating;                                      //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) BOOL hasReview; 
@property (nonatomic,retain) GEOPDReview * review;                                      //@synthesize review=_review - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo;                                        //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) BOOL hasHours; 
@property (nonatomic,retain) GEOPDHours * hours;                                        //@synthesize hours=_hours - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitInfo; 
@property (nonatomic,retain) GEOPDTransitInfo * transitInfo;                            //@synthesize transitInfo=_transitInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitSchedule; 
@property (nonatomic,retain) GEOPDTransitSchedule * transitSchedule;                    //@synthesize transitSchedule=_transitSchedule - In the implementation block
@property (nonatomic,readonly) BOOL hasEta; 
@property (nonatomic,retain) GEOPDETA * eta;                                            //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) BOOL hasFlyover; 
@property (nonatomic,retain) GEOPDFlyover * flyover;                                    //@synthesize flyover=_flyover - In the implementation block
@property (nonatomic,readonly) BOOL hasRawAttribute; 
@property (nonatomic,retain) GEOPDRawAttribute * rawAttribute;                          //@synthesize rawAttribute=_rawAttribute - In the implementation block
@property (nonatomic,readonly) BOOL hasAmenities; 
@property (nonatomic,retain) GEOPDAmenities * amenities;                                //@synthesize amenities=_amenities - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;                      //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncident; 
@property (nonatomic,retain) GEOPDTransitIncident * transitIncident;                    //@synthesize transitIncident=_transitIncident - In the implementation block
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,retain) GEOPDTextBlock * textBlock;                                //@synthesize textBlock=_textBlock - In the implementation block
@property (nonatomic,readonly) BOOL hasFactoid; 
@property (nonatomic,retain) GEOPDFactoid * factoid;                                    //@synthesize factoid=_factoid - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAttribution; 
@property (nonatomic,retain) GEOPDTransitAttribution * transitAttribution;              //@synthesize transitAttribution=_transitAttribution - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessClaim; 
@property (nonatomic,retain) GEOPDBusinessClaim * businessClaim;                        //@synthesize businessClaim=_businessClaim - In the implementation block
@property (nonatomic,readonly) BOOL hasCaptionedPhoto; 
@property (nonatomic,retain) GEOPDCaptionedPhoto * captionedPhoto;                      //@synthesize captionedPhoto=_captionedPhoto - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitInfoSnippet; 
@property (nonatomic,retain) GEOPDTransitInfoSnippet * transitInfoSnippet;              //@synthesize transitInfoSnippet=_transitInfoSnippet - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalAction; 
@property (nonatomic,retain) GEOPDExternalAction * externalAction;                      //@synthesize externalAction=_externalAction - In the implementation block
@property (nonatomic,readonly) BOOL hasResultSnippet; 
@property (nonatomic,retain) GEOPDResultSnippet * resultSnippet;                        //@synthesize resultSnippet=_resultSnippet - In the implementation block
-(GEOPDBounds *)bounds;
-(void)dealloc;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAddress;
-(void)setAddress:(GEOPDAddress *)arg1 ;
-(BOOL)hasStyleAttributes;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasPlaceInfo;
-(GEOPDPlaceInfo *)placeInfo;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(void)setRating:(GEOPDRating *)arg1 ;
-(GEOPDRating *)rating;
-(BOOL)hasRating;
-(GEOPDTransitSchedule *)transitSchedule;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(BOOL)hasPhoto;
-(void)setTransitInfo:(GEOPDTransitInfo *)arg1 ;
-(BOOL)hasRawAttribute;
-(void)setAccessInfo:(GEOPDRoadAccessInfo *)arg1 ;
-(void)setTextBlock:(GEOPDTextBlock *)arg1 ;
-(GEOPDResultSnippet *)resultSnippet;
-(GEOPDAmenities *)amenities;
-(BOOL)hasFlyover;
-(BOOL)hasEntity;
-(GEOPDTransitIncident *)transitIncident;
-(void)setTransitIncident:(GEOPDTransitIncident *)arg1 ;
-(void)setReview:(GEOPDReview *)arg1 ;
-(BOOL)hasEta;
-(GEOPDReview *)review;
-(void)setBusinessClaim:(GEOPDBusinessClaim *)arg1 ;
-(BOOL)hasTransitIncident;
-(void)setTransitSchedule:(GEOPDTransitSchedule *)arg1 ;
-(GEOPDFlyover *)flyover;
-(GEOPDTransitInfoSnippet *)transitInfoSnippet;
-(BOOL)hasExternalAction;
-(GEOPDRoadAccessInfo *)accessInfo;
-(void)setFactoid:(GEOPDFactoid *)arg1 ;
-(GEOPDRawAttribute *)rawAttribute;
-(void)setRawAttribute:(GEOPDRawAttribute *)arg1 ;
-(BOOL)hasResultSnippet;
-(GEOPDExternalAction *)externalAction;
-(BOOL)hasAmenities;
-(BOOL)hasAccessInfo;
-(void)setCaptionedPhoto:(GEOPDCaptionedPhoto *)arg1 ;
-(GEOPDTransitInfo *)transitInfo;
-(BOOL)hasTransitAttribution;
-(GEOPDBusinessClaim *)businessClaim;
-(GEOPDTransitAttribution *)transitAttribution;
-(BOOL)hasFactoid;
-(void)setAmenities:(GEOPDAmenities *)arg1 ;
-(GEOPDEntity *)entity;
-(void)setTransitInfoSnippet:(GEOPDTransitInfoSnippet *)arg1 ;
-(BOOL)hasReview;
-(GEOPDCaptionedPhoto *)captionedPhoto;
-(GEOPDETA *)eta;
-(BOOL)hasTextBlock;
-(void)setEta:(GEOPDETA *)arg1 ;
-(BOOL)hasTransitSchedule;
-(BOOL)hasTransitInfoSnippet;
-(void)setHours:(GEOPDHours *)arg1 ;
-(BOOL)hasTransitInfo;
-(BOOL)hasCaptionedPhoto;
-(GEOPDTextBlock *)textBlock;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(void)setFlyover:(GEOPDFlyover *)arg1 ;
-(void)setExternalAction:(GEOPDExternalAction *)arg1 ;
-(GEOPDHours *)hours;
-(void)setTransitAttribution:(GEOPDTransitAttribution *)arg1 ;
-(void)setResultSnippet:(GEOPDResultSnippet *)arg1 ;
-(BOOL)hasBusinessClaim;
-(GEOPDFactoid *)factoid;
-(BOOL)hasHours;
-(GEOPDPhoto *)photo;
-(GEOPDAddress *)address;
-(BOOL)hasBounds;
-(BOOL)readFrom:(id)arg1 ;
@end

