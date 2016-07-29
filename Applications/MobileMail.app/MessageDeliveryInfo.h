/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface MessageDeliveryInfo : NSObject <NSCoding> {

	NSDate* _created;
	NSDate* _lastAttempt;
	long long _numberOfFailures;
	long long _failedCellularAttempts;
	long long _lastStatus;
	unsigned long long _messageSize;
	unsigned long long _throughput;

}

@property (nonatomic,readonly) NSDate * created;                            //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) long long numberOfFailures;                    //@synthesize numberOfFailures=_numberOfFailures - In the implementation block
@property (assign,nonatomic) long long failedCellularAttempts;              //@synthesize failedCellularAttempts=_failedCellularAttempts - In the implementation block
@property (assign,nonatomic) long long lastStatus;                          //@synthesize lastStatus=_lastStatus - In the implementation block
@property (nonatomic,retain) NSDate * lastAttempt;                          //@synthesize lastAttempt=_lastAttempt - In the implementation block
@property (assign,nonatomic) unsigned long long messageSize;                //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) unsigned long long throughput;                 //@synthesize throughput=_throughput - In the implementation block
-(NSDate *)lastAttempt;
-(void)setLastAttempt:(NSDate *)arg1 ;
-(long long)numberOfFailures;
-(void)setNumberOfFailures:(long long)arg1 ;
-(long long)failedCellularAttempts;
-(void)setFailedCellularAttempts:(long long)arg1 ;
-(long long)lastStatus;
-(void)setLastStatus:(long long)arg1 ;
-(void)setThroughput:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(unsigned long long)messageSize;
-(unsigned long long)throughput;
-(NSDate *)created;
@end
