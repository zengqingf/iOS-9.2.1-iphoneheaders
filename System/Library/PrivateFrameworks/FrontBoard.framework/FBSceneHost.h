/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBSDisplay;


@protocol FBSceneHost
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) FBSDisplay * display; 
@required
-(NSString *)identifier;
-(FBSDisplay *)display;
-(void)client:(id)arg1 attachLayer:(id)arg2;
-(void)client:(id)arg1 updateLayer:(id)arg2;
-(void)client:(id)arg1 detachLayer:(id)arg2;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
-(void)client:(id)arg1 didReceiveActions:(id)arg2;

@end

