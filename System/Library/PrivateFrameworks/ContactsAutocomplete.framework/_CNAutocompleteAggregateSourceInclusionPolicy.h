/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class NSArray, NSString;

@interface _CNAutocompleteAggregateSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {

	NSArray* _policies;

}

@property (readonly) NSArray * policies;                            //@synthesize policies=_policies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL includeContacts; 
@property (readonly) BOOL includeRecents; 
@property (readonly) BOOL includeSuggestions; 
@property (readonly) BOOL includeDirectoryServers; 
@property (readonly) BOOL includeCalendarServers; 
@property (readonly) BOOL includeSupplementalResults; 
@property (readonly) BOOL includePredictions; 
-(NSArray *)policies;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(BOOL)includeSupplementalResults;
-(id)initWithPolicies:(id)arg1 ;
-(BOOL)includeContacts;
-(BOOL)includeRecents;
-(BOOL)includeSuggestions;
@end

