/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, GEOVersionManifest;

@interface GEOActiveTileGroup : PBCodable <NSCopying> {

	SCD_Struct_GE88* _hybridUnavailableRegions;
	unsigned long long _hybridUnavailableRegionsCount;
	unsigned long long _hybridUnavailableRegionsSpace;
	NSString* _abExperimentURL;
	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSMutableArray* _announcementsSupportedLanguages;
	NSString* _announcementsURL;
	NSMutableArray* _attributions;
	NSString* _autocompleteURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _businessPortalBaseURL;
	NSString* _directionsURL;
	NSString* _dispatcherURL;
	NSString* _etaURL;
	NSMutableArray* _fontChecksums;
	NSMutableArray* _fonts;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _identifier;
	NSMutableArray* _locationShiftEnabledRegions;
	NSString* _locationShiftURL;
	unsigned _locationShiftVersion;
	NSString* _logMessageUsageURL;
	NSString* _mapMatchURL;
	NSString* _polyLocationShiftURL;
	NSString* _problemCategoriesURL;
	NSString* _problemOptInURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSMutableArray* _regionalResourceRegions;
	NSMutableArray* _regionalResourceTiles;
	NSString* _regionalResourcesURL;
	NSString* _releaseInfo;
	NSMutableArray* _resources;
	NSString* _resourcesURL;
	NSString* _reverseGeocoderVersionsURL;
	NSString* _searchAttributionManifestURL;
	NSString* _simpleETAURL;
	NSMutableArray* _styleSheetChecksums;
	NSMutableArray* _styleSheets;
	NSMutableArray* _textureChecksums;
	NSMutableArray* _textures;
	NSMutableArray* _tileSets;
	NSString* _uniqueIdentifier;
	NSString* _usageURL;
	GEOVersionManifest* _versionManifest;
	NSMutableArray* _xmlChecksums;
	NSMutableArray* _xmls;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) unsigned identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileSets;                                       //@synthesize tileSets=_tileSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * resources;                                      //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                                   //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResourceTiles;                          //@synthesize regionalResourceTiles=_regionalResourceTiles - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResourceRegions;                        //@synthesize regionalResourceRegions=_regionalResourceRegions - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionalResourcesURL; 
@property (nonatomic,retain) NSString * regionalResourcesURL;                                 //@synthesize regionalResourcesURL=_regionalResourcesURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchAttributionManifestURL; 
@property (nonatomic,retain) NSString * searchAttributionManifestURL;                         //@synthesize searchAttributionManifestURL=_searchAttributionManifestURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteURL; 
@property (nonatomic,retain) NSString * autocompleteURL;                                      //@synthesize autocompleteURL=_autocompleteURL - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL;                                        //@synthesize directionsURL=_directionsURL - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL;                                               //@synthesize etaURL=_etaURL - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationShiftURL; 
@property (nonatomic,retain) NSString * locationShiftURL;                                     //@synthesize locationShiftURL=_locationShiftURL - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL;                              //@synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) BOOL hasReleaseInfo; 
@property (nonatomic,retain) NSString * releaseInfo;                                          //@synthesize releaseInfo=_releaseInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasMapMatchURL; 
@property (nonatomic,retain) NSString * mapMatchURL;                                          //@synthesize mapMatchURL=_mapMatchURL - In the implementation block
@property (nonatomic,readonly) BOOL hasResourcesURL; 
@property (nonatomic,retain) NSString * resourcesURL;                                         //@synthesize resourcesURL=_resourcesURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL;                                         //@synthesize simpleETAURL=_simpleETAURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL;                             //@synthesize addressCorrectionInitURL=_addressCorrectionInitURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL;                           //@synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL - In the implementation block
@property (nonatomic,readonly) BOOL hasPolyLocationShiftURL; 
@property (nonatomic,retain) NSString * polyLocationShiftURL;                                 //@synthesize polyLocationShiftURL=_polyLocationShiftURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL;                                 //@synthesize problemSubmissionURL=_problemSubmissionURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL;                                     //@synthesize problemStatusURL=_problemStatusURL - In the implementation block
@property (nonatomic,readonly) BOOL hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) NSString * reverseGeocoderVersionsURL;                           //@synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL;                                 //@synthesize problemCategoriesURL=_problemCategoriesURL - In the implementation block
@property (nonatomic,readonly) BOOL hasUsageURL; 
@property (nonatomic,retain) NSString * usageURL;                                             //@synthesize usageURL=_usageURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAnnouncementsURL; 
@property (nonatomic,retain) NSString * announcementsURL;                                     //@synthesize announcementsURL=_announcementsURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * announcementsSupportedLanguages;                //@synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDispatcherURL; 
@property (nonatomic,retain) NSString * dispatcherURL;                                        //@synthesize dispatcherURL=_dispatcherURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemOptInURL; 
@property (nonatomic,retain) NSString * problemOptInURL;                                      //@synthesize problemOptInURL=_problemOptInURL - In the implementation block
@property (nonatomic,readonly) BOOL hasVersionManifest; 
@property (nonatomic,retain) GEOVersionManifest * versionManifest;                            //@synthesize versionManifest=_versionManifest - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheets;                                    //@synthesize styleSheets=_styleSheets - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheetChecksums;                            //@synthesize styleSheetChecksums=_styleSheetChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * textures;                                       //@synthesize textures=_textures - In the implementation block
@property (nonatomic,retain) NSMutableArray * textureChecksums;                               //@synthesize textureChecksums=_textureChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * fonts;                                          //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,retain) NSMutableArray * fontChecksums;                                  //@synthesize fontChecksums=_fontChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                                          //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                                  //@synthesize iconChecksums=_iconChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmls;                                           //@synthesize xmls=_xmls - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmlChecksums;                                   //@synthesize xmlChecksums=_xmlChecksums - In the implementation block
@property (nonatomic,readonly) BOOL hasAbExperimentURL; 
@property (nonatomic,retain) NSString * abExperimentURL;                                      //@synthesize abExperimentURL=_abExperimentURL - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessPortalBaseURL; 
@property (nonatomic,retain) NSString * businessPortalBaseURL;                                //@synthesize businessPortalBaseURL=_businessPortalBaseURL - In the implementation block
@property (nonatomic,readonly) BOOL hasLogMessageUsageURL; 
@property (nonatomic,retain) NSString * logMessageUsageURL;                                   //@synthesize logMessageUsageURL=_logMessageUsageURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationShiftEnabledRegions;                    //@synthesize locationShiftEnabledRegions=_locationShiftEnabledRegions - In the implementation block
@property (assign,nonatomic) BOOL hasLocationShiftVersion; 
@property (assign,nonatomic) unsigned locationShiftVersion;                                   //@synthesize locationShiftVersion=_locationShiftVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long hybridUnavailableRegionsCount; 
@property (nonatomic,readonly) SCD_Struct_GE88* hybridUnavailableRegions; 
-(BOOL)isHybridModeAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(void)_resetBestLanguages;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)baseURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(id)regionalResourceRegionsForMapRect:(SCD_Struct_GE57)arg1 ;
-(id)localizationURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(id)regionalResourceKeysForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)largestRegionalResourceZoomLevelContainingTileKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForTileType:(int)arg1 scale:(int)arg2 ;
-(id)flatRegionalResourceTilesForMapRect:(SCD_Struct_GE57)arg1 ;
-(BOOL)hasRegionalResourcesForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)icons;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearAttributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributions;
-(unsigned long long)attributionsCount;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(NSMutableArray *)tileSets;
-(void)clearTileSets;
-(id)tileSetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)tileSetsCount;
-(void)setTileSets:(NSMutableArray *)arg1 ;
-(void)addTileSet:(id)arg1 ;
-(NSString *)batchReverseGeocoderURL;
-(id)textureAtIndex:(unsigned long long)arg1 ;
-(void)setXmlChecksums:(NSMutableArray *)arg1 ;
-(id)fontChecksumAtIndex:(unsigned long long)arg1 ;
-(void)setLocationShiftURL:(NSString *)arg1 ;
-(NSString *)autocompleteURL;
-(BOOL)hasAddressCorrectionUpdateURL;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(NSString *)reverseGeocoderVersionsURL;
-(void)setAbExperimentURL:(NSString *)arg1 ;
-(unsigned long long)xmlChecksumsCount;
-(NSString *)problemStatusURL;
-(void)setStyleSheets:(NSMutableArray *)arg1 ;
-(BOOL)hasPolyLocationShiftURL;
-(void)clearTextures;
-(NSString *)searchAttributionManifestURL;
-(BOOL)hasLocationShiftVersion;
-(id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasProblemSubmissionURL;
-(void)addFontChecksum:(id)arg1 ;
-(void)setReleaseInfo:(NSString *)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(BOOL)hasProblemStatusURL;
-(void)addStyleSheet:(id)arg1 ;
-(unsigned long long)styleSheetChecksumsCount;
-(void)setVersionManifest:(GEOVersionManifest *)arg1 ;
-(NSString *)directionsURL;
-(void)setTextures:(NSMutableArray *)arg1 ;
-(BOOL)hasReverseGeocoderVersionsURL;
-(void)clearTextureChecksums;
-(NSString *)usageURL;
-(unsigned long long)styleSheetsCount;
-(void)setUsageURL:(NSString *)arg1 ;
-(NSString *)problemCategoriesURL;
-(BOOL)hasProblemCategoriesURL;
-(void)addIcon:(id)arg1 ;
-(BOOL)hasResourcesURL;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(void)addXml:(id)arg1 ;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(void)setStyleSheetChecksums:(NSMutableArray *)arg1 ;
-(void)clearXmls;
-(unsigned long long)iconChecksumsCount;
-(BOOL)hasLogMessageUsageURL;
-(NSString *)addressCorrectionInitURL;
-(void)clearStyleSheetChecksums;
-(void)setFonts:(NSMutableArray *)arg1 ;
-(unsigned)locationShiftVersion;
-(NSMutableArray *)xmlChecksums;
-(id)textureChecksumAtIndex:(unsigned long long)arg1 ;
-(id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1 ;
-(void)setPolyLocationShiftURL:(NSString *)arg1 ;
-(NSMutableArray *)locationShiftEnabledRegions;
-(NSString *)problemSubmissionURL;
-(void)setLocationShiftVersion:(unsigned)arg1 ;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(NSString *)resourcesURL;
-(unsigned long long)xmlsCount;
-(void)setSearchAttributionManifestURL:(NSString *)arg1 ;
-(void)setMapMatchURL:(NSString *)arg1 ;
-(void)setLogMessageUsageURL:(NSString *)arg1 ;
-(void)clearXmlChecksums;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(NSString *)polyLocationShiftURL;
-(void)setHasLocationShiftVersion:(BOOL)arg1 ;
-(NSString *)addressCorrectionUpdateURL;
-(unsigned long long)texturesCount;
-(void)clearLocationShiftEnabledRegions;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(BOOL)hasAddressCorrectionInitURL;
-(unsigned long long)fontsCount;
-(void)setAutocompleteURL:(NSString *)arg1 ;
-(void)addLocationShiftEnabledRegion:(id)arg1 ;
-(NSString *)abExperimentURL;
-(BOOL)hasDirectionsURL;
-(NSMutableArray *)styleSheetChecksums;
-(unsigned long long)fontChecksumsCount;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(NSMutableArray *)textures;
-(BOOL)hasDispatcherURL;
-(GEOVersionManifest *)versionManifest;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(NSString *)simpleETAURL;
-(id)styleSheetChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)locationShiftEnabledRegionsCount;
-(id)xmlChecksumAtIndex:(unsigned long long)arg1 ;
-(void)addTexture:(id)arg1 ;
-(NSString *)problemOptInURL;
-(BOOL)hasProblemOptInURL;
-(void)addTextureChecksum:(id)arg1 ;
-(void)clearFonts;
-(void)setAnnouncementsSupportedLanguages:(NSMutableArray *)arg1 ;
-(BOOL)hasVersionManifest;
-(void)addAnnouncementsSupportedLanguages:(id)arg1 ;
-(BOOL)hasAutocompleteURL;
-(BOOL)hasAbExperimentURL;
-(BOOL)hasSearchAttributionManifestURL;
-(NSString *)logMessageUsageURL;
-(NSMutableArray *)iconChecksums;
-(NSMutableArray *)xmls;
-(id)styleSheetAtIndex:(unsigned long long)arg1 ;
-(void)setXmls:(NSMutableArray *)arg1 ;
-(NSMutableArray *)textureChecksums;
-(NSString *)businessPortalBaseURL;
-(void)clearIconChecksums;
-(NSMutableArray *)fontChecksums;
-(void)setResourcesURL:(NSString *)arg1 ;
-(void)addXmlChecksum:(id)arg1 ;
-(void)setLocationShiftEnabledRegions:(NSMutableArray *)arg1 ;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(BOOL)hasBusinessPortalBaseURL;
-(NSString *)locationShiftURL;
-(NSMutableArray *)announcementsSupportedLanguages;
-(void)addFont:(id)arg1 ;
-(BOOL)hasSimpleETAURL;
-(void)addIconChecksum:(id)arg1 ;
-(BOOL)hasUsageURL;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(NSString *)announcementsURL;
-(BOOL)hasMapMatchURL;
-(void)clearStyleSheets;
-(unsigned long long)textureChecksumsCount;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(void)setTextureChecksums:(NSMutableArray *)arg1 ;
-(BOOL)hasBatchReverseGeocoderURL;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)announcementsSupportedLanguagesCount;
-(NSString *)etaURL;
-(void)clearIcons;
-(id)xmlAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasReleaseInfo;
-(void)clearFontChecksums;
-(void)setEtaURL:(NSString *)arg1 ;
-(NSString *)dispatcherURL;
-(NSString *)mapMatchURL;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(BOOL)hasLocationShiftURL;
-(BOOL)hasAnnouncementsURL;
-(void)setReverseGeocoderVersionsURL:(NSString *)arg1 ;
-(void)addStyleSheetChecksum:(id)arg1 ;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(NSString *)releaseInfo;
-(NSMutableArray *)styleSheets;
-(void)setFontChecksums:(NSMutableArray *)arg1 ;
-(unsigned long long)iconsCount;
-(void)clearAnnouncementsSupportedLanguages;
-(BOOL)hasEtaURL;
-(SCD_Struct_GE88*)hybridUnavailableRegions;
-(void)setHybridUnavailableRegions:(SCD_Struct_GE88*)arg1 count:(unsigned long long)arg2 ;
-(void)addHybridUnavailableRegion:(SCD_Struct_GE88)arg1 ;
-(void)clearHybridUnavailableRegions;
-(unsigned long long)hybridUnavailableRegionsCount;
-(SCD_Struct_GE88)hybridUnavailableRegionAtIndex:(unsigned long long)arg1 ;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)regionalResourceRegionsCount;
-(void)addResource:(id)arg1 ;
-(NSMutableArray *)regionalResourceTiles;
-(NSMutableArray *)regionalResourceRegions;
-(void)clearRegionalResourceRegions;
-(NSString *)regionalResourcesURL;
-(void)setRegionalResourceTiles:(NSMutableArray *)arg1 ;
-(id)regionalResourceTileAtIndex:(unsigned long long)arg1 ;
-(void)setRegionalResourceRegions:(NSMutableArray *)arg1 ;
-(BOOL)hasRegionalResourcesURL;
-(unsigned long long)resourcesCount;
-(void)addRegionalResourceTile:(id)arg1 ;
-(void)setRegionalResourcesURL:(NSString *)arg1 ;
-(void)clearResources;
-(id)regionalResourceRegionAtIndex:(unsigned long long)arg1 ;
-(void)addRegionalResourceRegion:(id)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(unsigned long long)regionalResourceTilesCount;
-(void)clearRegionalResourceTiles;
-(NSMutableArray *)resources;
-(void)setResources:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)fonts;
-(id)fontAtIndex:(unsigned long long)arg1 ;
@end
