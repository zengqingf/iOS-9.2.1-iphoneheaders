/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@interface ICPTPIPClient : NSObject {

	id _clientProperties;

}
-(id)init;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setFdref:(CFFileDescriptorRef)arg1 ;
-(void)setRemotePort:(CFMessagePortRef)arg1 ;
-(CFFileDescriptorRef)fdref;
-(CFMessagePortRef)remotePort;
-(int)serverFD;
-(void)setServerFD:(int)arg1 ;
-(int)remoteAddress;
-(void)setRemoteAddress:(int)arg1 ;
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
@end

