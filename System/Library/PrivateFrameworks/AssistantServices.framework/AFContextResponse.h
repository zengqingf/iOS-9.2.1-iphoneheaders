/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriResponse.h>

@class STSiriContext;

@interface AFContextResponse : AFSiriResponse {

	STSiriContext* _context;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_context;
-(id)_initWithRequest:(id)arg1 context:(id)arg2 ;
@end

