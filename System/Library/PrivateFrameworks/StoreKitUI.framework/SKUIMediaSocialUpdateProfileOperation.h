/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSString, NSNumber, NSLock, NSMutableDictionary;

@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSString* _entityType;
	NSNumber* _identifier;
	NSLock* _lock;
	NSMutableDictionary* _parameters;
	/*^block*/id _outputBlock;

}

@property (copy) NSString * entityType; 
@property (copy) NSNumber * identifier; 
@property (copy) id outputBlock; 
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(void)main;
-(NSString *)entityType;
-(void)setEntityType:(NSString *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(id)outputBlock;
-(void)setValue:(id)arg1 forProfileField:(id)arg2 ;
-(id)_imageDictionaryFromPhotoUpload:(id)arg1 ;
-(id)_requestWithError:(id*)arg1 ;
-(id)_requestBodyWithError:(id*)arg1 ;
@end

