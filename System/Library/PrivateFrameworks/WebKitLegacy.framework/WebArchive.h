/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WebArchivePrivate, WebResource, NSArray, NSData;

@interface WebArchive : NSObject <NSCoding, NSCopying> {

	WebArchivePrivate* _private;

}

@property (nonatomic,readonly) WebResource * mainResource; 
@property (nonatomic,copy,readonly) NSArray * subresources; 
@property (nonatomic,copy,readonly) NSArray * subframeArchives; 
@property (nonatomic,copy,readonly) NSData * data; 
+(id)bundleForClass;
-(id)_initWithCoreLegacyWebArchive:(PassRefPtr<WebCore::LegacyWebArchive>*)arg1 ;
-(LegacyWebArchive*)_coreLegacyWebArchive;
-(id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3 ;
-(NSArray *)subframeArchives;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(WebResource *)mainResource;
-(NSArray *)subresources;
@end

