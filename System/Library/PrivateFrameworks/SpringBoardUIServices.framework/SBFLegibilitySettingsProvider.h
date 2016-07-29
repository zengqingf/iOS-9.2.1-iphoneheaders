/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UILegibilitySettings;


@protocol SBFLegibilitySettingsProvider <NSObject>
@property (nonatomic,retain,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(_UILegibilitySettings *)legibilitySettings;

@end
