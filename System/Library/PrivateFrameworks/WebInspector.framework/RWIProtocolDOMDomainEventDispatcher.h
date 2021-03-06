/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolDOMDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)childNodeCountUpdatedWithNodeId:(int)arg1 childNodeCount:(int)arg2 ;
-(void)shadowRootPushedWithHostId:(int)arg1 root:(id)arg2 ;
-(void)shadowRootPoppedWithHostId:(int)arg1 rootId:(int)arg2 ;
-(void)documentUpdated;
-(void)setChildNodesWithParentId:(int)arg1 nodes:(id)arg2 ;
-(void)characterDataModifiedWithNodeId:(int)arg1 characterData:(id)arg2 ;
-(void)childNodeRemovedWithParentNodeId:(int)arg1 nodeId:(int)arg2 ;
-(void)attributeRemovedWithNodeId:(int)arg1 name:(id)arg2 ;
-(void)attributeModifiedWithNodeId:(int)arg1 name:(id)arg2 value:(id)arg3 ;
-(void)inlineStyleInvalidatedWithNodeIds:(id)arg1 ;
-(void)childNodeInsertedWithParentNodeId:(int)arg1 previousNodeId:(int)arg2 node:(id)arg3 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
@end

