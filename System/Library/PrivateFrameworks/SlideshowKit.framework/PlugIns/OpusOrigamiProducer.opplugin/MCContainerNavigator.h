/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCContainer.h>

@class NSMutableDictionary, NSString, MCPlugHaven, NSSet;

@interface MCContainerNavigator : MCContainer {

	NSMutableDictionary* mPlugs;
	NSString* mStartPlugID;
	MCPlugHaven* mStartPlug;

}

@property (readonly) NSSet * plugs; 
@property (readonly) unsigned long long countOfPlugs; 
@property (nonatomic,copy) NSString * startPlugID; 
@property (readonly) MCPlugHaven * startPlug; 
-(void)changeIDOfPlug:(id)arg1 toID:(id)arg2 ;
-(void)removePlug:(id)arg1 ;
-(id)plugForID:(id)arg1 ;
-(MCPlugHaven *)startPlug;
-(void)removeAllPlugs;
-(unsigned long long)countOfPlugs;
-(void)setStartPlugID:(NSString *)arg1 ;
-(NSString *)startPlugID;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)removePlugForID:(id)arg1 ;
-(id)setPlugForContainer:(id)arg1 forID:(id)arg2 ;
-(NSSet *)plugs;
-(id)init;
-(id)imprint;
@end
