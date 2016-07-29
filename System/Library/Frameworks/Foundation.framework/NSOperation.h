/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperation : NSObject {

	id _private;
	int _private1;
	int _private1b;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isConcurrent,readonly) BOOL concurrent; 
@property (getter=isAsynchronous,readonly) BOOL asynchronous; 
@property (getter=isReady,readonly) BOOL ready; 
@property (copy,readonly) NSArray * dependencies; 
@property (assign) long long queuePriority; 
@property (copy) id completionBlock; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
+(id)currentOperation;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(id)_activity;
-(id)_implicitObservationInfo;
-(void)waitUntilFinished;
-(BOOL)isReady;
-(/*^block*/id)_copyCompletionBlock;
-(id)__;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(long long)_effQoS;
-(long long)qualityOfService;
-(void)waitUntilFinishedOrTimeout:(double)arg1 ;
-(void)removeDependency:(id)arg1 ;
-(NSArray *)dependencies;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)start;
-(BOOL)isCancelled;
-(void)setQualityOfService:(long long)arg1 ;
-(void)main;
-(void*)observationInfo;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(double)threadPriority;
-(void)setThreadPriority:(double)arg1 ;
-(void)setQueuePriority:(long long)arg1 ;
-(long long)queuePriority;
-(void)addDependency:(id)arg1 ;
-(void)finalize;
@end
