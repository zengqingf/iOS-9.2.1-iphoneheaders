/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportUploadBatchTask;
@class NSObject, CPLChangeBatch, NSArray, NSString, CPLEngineChangePipe;

@interface CPLPushToTransportTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	CPLChangeBatch* _uploadBatch;
	NSArray* _uploadResourceTasks;
	NSArray* _staleOrUnavailableResources;
	NSArray* _resourcesForBackgroundUpload;
	id<CPLEngineTransportUploadBatchTask> _uploadTask;
	unsigned long long _lastReportedProgress;
	unsigned long long _countOfPushedBatches;
	NSString* _clientCacheIdentifier;
	CPLEngineChangePipe* _currentPushQueue;
	double _startOfIteration;
	BOOL _deferredCancel;

}

@property (retain) id<CPLPushToTransportTaskDelegate> delegate; 
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(void)cancel:(BOOL)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)_doOneIteration;
-(BOOL)_discardResourcesToUploadFromBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)_prepareResourcesToUploadInBatch:(id)arg1 error:(id*)arg2 ;
-(void)_detectUpdatesForFullRecordsWithNoChangeDataInBatch:(id)arg1 ;
-(BOOL)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id*)arg2 ;
-(void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2 ;
-(void)_pushTaskDidFinishWithError:(id)arg1 ;
-(void)_popNextBatchAndContinue;
-(id)taskIdentifier;
@end

