/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/PlugIns/InterfacePlugins/CECIOCECInterfaceListener.plugin/CECIOCECInterfaceListener
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CECIOCECInterfaceListener/CECIOCECInterfaceListener-Structs.h>
#import <CoreRC/CECInterface.h>

@interface CECIOCECInterface : CECInterface {

	BOOL _isOpen;
	IOCECInterfaceRef _iocecInterface;

}

@property (assign,nonatomic) IOCECInterfaceRef iocecInterface;              //@synthesize iocecInterface=_iocecInterface - In the implementation block
+(id)interfaceWithIOCECInterface:(IOCECInterfaceRef)arg1 ;
-(BOOL)ioUpdateAddressMask:(id*)arg1 ;
-(void)setIocecInterface:(IOCECInterfaceRef)arg1 ;
-(id)initWithIOCECInterface:(IOCECInterfaceRef)arg1 ;
-(int)ioSendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 ;
-(IOCECInterfaceRef)iocecInterface;
-(void)dealloc;
-(id)init;
-(BOOL)isValid;
-(void)close;
-(id)properties;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(int)open;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(BOOL)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)errorIsNack:(id)arg1 ;
-(BOOL)setAddressMask:(unsigned short)arg1 error:(id*)arg2 ;
-(BOOL)setPromiscMode:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)allocateCECAddress:(unsigned char*)arg1 forDeviceType:(unsigned char)arg2 error:(id*)arg3 ;
@end

