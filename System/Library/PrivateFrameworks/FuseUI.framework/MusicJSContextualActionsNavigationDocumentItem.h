/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MusicJSManagedObject, NSDictionary;

@interface MusicJSContextualActionsNavigationDocumentItem : NSObject {

	MusicJSManagedObject* _jsDocumentManagedObject;
	NSDictionary* _presentationOptions;

}

@property (nonatomic,readonly) MusicJSManagedObject * jsDocumentManagedObject;              //@synthesize jsDocumentManagedObject=_jsDocumentManagedObject - In the implementation block
@property (nonatomic,readonly) NSDictionary * presentationOptions;                          //@synthesize presentationOptions=_presentationOptions - In the implementation block
-(id)init;
-(NSDictionary *)presentationOptions;
-(MusicJSManagedObject *)jsDocumentManagedObject;
-(id)initWithJSDocumentManagedObject:(id)arg1 presentationOptions:(id)arg2 ;
@end
