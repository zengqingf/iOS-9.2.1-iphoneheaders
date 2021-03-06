/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, GEOMapRegion, VKAnchorWrapper;


@protocol VKInteractiveMap <NSObject>
@property (assign,nonatomic) id<VKInteractiveMapDelegate> delegate; 
@property (assign,nonatomic) BOOL trafficEnabled; 
@property (assign,nonatomic) BOOL trafficIncidentsEnabled; 
@property (assign,nonatomic) BOOL staysCenteredDuringPinch; 
@property (assign,nonatomic) BOOL staysCenteredDuringRotation; 
@property (assign,nonatomic) BOOL isPitchable; 
@property (getter=isPitched,nonatomic,readonly) BOOL pitched; 
@property (getter=isFullyPitched,nonatomic,readonly) BOOL fullyPitched; 
@property (assign,nonatomic) long long mapType; 
@property (assign,nonatomic) long long shieldSize; 
@property (assign,nonatomic) long long navigationShieldSize; 
@property (assign,nonatomic) long long shieldIdiom; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings; 
@property (assign,nonatomic) PolylineCoordinate routeUserOffset; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (nonatomic,readonly) double minimumZoomLevel; 
@property (nonatomic,readonly) double maximumZoomLevel; 
@property (assign,nonatomic) BOOL labelMarkerSelectionEnabled; 
@property (assign,nonatomic) BOOL localizeLabels; 
@property (assign,nonatomic) unsigned char labelScaleFactor; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double altitude; 
@property (assign,nonatomic) long long annotationTrackingZoomStyle; 
@property (assign,nonatomic) long long annotationTrackingHeadingAnimationDisplayRate; 
@property (assign,nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (getter=isAnimatingToTrackAnnotation,nonatomic,readonly) BOOL animatingToTrackAnnotation; 
@property (nonatomic,readonly) id<VKTrackableAnnotation> trackingAnnotation; 
@property (getter=isTrackingHeading,nonatomic,readonly) BOOL trackingHeading; 
@property (nonatomic,readonly) NSArray * rasterOverlays; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (getter=isFullyDrawn,nonatomic,readonly) BOOL fullyDrawn; 
@property (nonatomic,readonly) VKAnchorWrapper * externalAnchors; 
@required
+(BOOL)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(id)arg3;
-(void)setDelegate:(id)arg1;
-(id<VKInteractiveMapDelegate>)delegate;
-(void)setMapRegion:(id)arg1;
-(GEOMapRegion *)mapRegion;
-(double)altitude;
-(id)viewportInfo;
-(long long)mapType;
-(VKPoint*)centerCoordinate;
-(void)setMapType:(long long)arg1;
-(NSArray *)visibleTileSets;
-(id)detailedDescription;
-(void)zoomToLevel:(double)arg1 withFocusPoint:(CGPoint)arg2;
-(void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(BOOL)arg2;
-(id)annotationMarkers;
-(SCD_Struct_VK26*)convertPointToMapPoint:(CGPoint)arg1;
-(NSArray *)rasterOverlays;
-(void)endStyleAnimationGroup;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 setupHandler:(/*^block*/id)arg3;
-(void)setCenterCoordinate3D:(VKPoint)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8;
-(BOOL)isTrackingHeading;
-(CGPoint*)convertCoordinateToCameraModelPoint:(SCD_Struct_VK26)arg1;
-(double)minimumZoomLevelForTileSize:(long long)arg1;
-(long long)annotationTrackingHeadingAnimationDisplayRate;
-(double)maximumZoomLevel;
-(CGPoint*)convertMapPointToPoint:(SCD_Struct_VK26)arg1;
-(long long)navigationShieldSize;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4;
-(unsigned char)labelScaleFactor;
-(PolylineCoordinate)routeUserOffset;
-(void)beginStyleAnimationGroup;
-(void)stylesheetAnimationDidProgress:(float)arg1;
-(BOOL)labelMarkerSelectionEnabled;
-(double)_styleTransitionProgress;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1;
-(void)setCenterCoordinate:(SCD_Struct_VK26)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8;
-(id)annotationMarkerForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(BOOL)arg2;
-(VKAnchorWrapper *)externalAnchors;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(NSArray *)externalTrafficIncidents;
-(double)currentZoomLevel;
-(id)closestRoadMarkerForSelectionAtPoint:(CGPoint)arg1;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)setExternalTrafficIncidents:(id)arg1;
-(void)setNavigationShieldSize:(long long)arg1;
-(DisplayStyle*)sourceMapDisplayStyle;
-(BOOL)isFullyDrawn;
-(/*^block*/id)annotationMarkerDeselectionCallback;
-(CGPoint*)convertCoordinateToPoint:(SCD_Struct_VK26)arg1;
-(SCD_Struct_VK26*)convertPointToCoordinate:(CGPoint)arg1;
-(void)setMapRegion:(id)arg1 animated:(BOOL)arg2;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/id)arg1;
-(void)setShieldIdiom:(long long)arg1;
-(id<VKTrackableAnnotation>)trackingAnnotation;
-(void)setStaysCenteredDuringRotation:(BOOL)arg1;
-(void)selectAnnotationMarker:(id)arg1;
-(double)minimumZoomLevel;
-(void)deselectAnnotationMarker:(id)arg1;
-(id)selectedAnnotationMarker;
-(void)stylesheetAnimationDidEnd:(BOOL)arg1;
-(id)persistentOverlays;
-(long long)shieldIdiom;
-(BOOL)supportsMapDisplayStyle:(DisplayStyle)arg1;
-(VKPoint*)screenPointForPoint:(CGPoint)arg1;
-(void)setStylesheetMapDisplayStyle:(DisplayStyle)arg1;
-(void)stylesheetAnimationWillStartFromStyle:(DisplayStyle)arg1 toStyle:(DisplayStyle)arg2;
-(id)selectedLabelMarker;
-(BOOL)canZoomInForTileSize:(long long)arg1;
-(void)stopTrackingAnnotation;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
-(BOOL)canZoomOutForTileSize:(long long)arg1;
-(void)exit3DMode;
-(void)_setStyleTransitionProgress:(double)arg1 targetStyle:(DisplayStyle)arg2 step:(long long)arg3;
-(/*^block*/id)annotationCoordinateTest;
-(void)setAnnotationTrackingZoomStyle:(long long)arg1;
-(void)setLabelMarkerSelectionEnabled:(BOOL)arg1;
-(BOOL)isShowingNoDataPlaceholders;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
-(BOOL)canEnter3DMode;
-(double)currentZoomLevelForTileSize:(long long)arg1;
-(long long)annotationTrackingZoomStyle;
-(BOOL)isPitchable;
-(BOOL)showsPointsOfInterest;
-(void)addExternalAnchor:(id)arg1;
-(double)presentationYaw;
-(BOOL)showsBuildings;
-(void)removeExternalAnchor:(id)arg1;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3;
-(double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
-(void)debugHighlightLabelAtPoint:(CGPoint)arg1;
-(void)setTrafficEnabled:(BOOL)arg1;
-(void)removeAnnotationMarker:(id)arg1;
-(double)maximumZoomLevelForTileSize:(long long)arg1;
-(BOOL)trafficIncidentsEnabled;
-(void)selectLabelMarker:(id)arg1;
-(void)setIsPitchable:(BOOL)arg1;
-(void)deselectLabelMarker;
-(BOOL)isPitched;
-(void)stopPanningAtPoint:(CGPoint)arg1;
-(void)setMapType:(long long)arg1 animated:(BOOL)arg2;
-(/*^block*/id)annotationRectTest;
-(void)setTrafficIncidentsEnabled:(BOOL)arg1;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5;
-(GEOMapRegion *)mapRegionOfInterest;
-(BOOL)localizeLabels;
-(id)attributionsForCurrentRegion;
-(void)setLocalizeLabels:(BOOL)arg1;
-(void)enter3DMode;
-(void)addPersistentOverlay:(id)arg1;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
-(void)setYaw:(double)arg1 animated:(BOOL)arg2;
-(double)yaw;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5;
-(void)updatePanWithTranslation:(CGPoint)arg1;
-(void)setStaysCenteredDuringPinch:(BOOL)arg1;
-(void)setRouteLineSplitAnnotation:(id)arg1;
-(void)setShowsBuildings:(BOOL)arg1;
-(double)durationToAnimateToMapRegion:(id)arg1;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(void)removePersistentOverlay:(id)arg1;
-(id)labelMarkers;
-(void)setShowsPointsOfInterest:(BOOL)arg1;
-(BOOL)isAnimatingToTrackAnnotation;
-(BOOL)restoreViewportFromInfo:(id)arg1;
-(id)consoleString:(BOOL)arg1;
-(void)setShieldSize:(long long)arg1;
-(long long)shieldSize;
-(BOOL)currentZoomLevelAllowsRotation;
-(void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1;
-(id)transitLineMarkersInCurrentViewport;
-(void)selectTransitLineMarker:(id)arg1;
-(void)deselectTransitLineMarker;
-(void)addOverlay:(id)arg1;
-(id)overlays;
-(void)removeOverlay:(id)arg1;
-(void)addRasterOverlay:(id)arg1;
-(void)removeRasterOverlay:(id)arg1;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
-(double)zoomLevelAdjustmentForTileSize:(long long)arg1;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1;
-(BOOL)isFullyPitched;
-(void)didStartPanningDeceleration;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1;
-(void)stopSnappingAnimations;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1;
-(BOOL)staysCenteredDuringPinch;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
-(BOOL)staysCenteredDuringRotation;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1;
-(void)setLabelScaleFactor:(unsigned char)arg1;
-(BOOL)trafficEnabled;
-(BOOL)isPointValidForGesturing:(CGPoint)arg1;
-(id)transitLineMarkersForSelectionAtPoint:(CGPoint)arg1;
-(double)pitch;

@end

