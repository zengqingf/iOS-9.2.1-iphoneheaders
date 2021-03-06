/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNAutocompleteProbeKeyBuilder : NSObject {

	NSString* _key;
	NSArray* _prefixes;
	NSArray* _suffixes;

}

@property (nonatomic,retain) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * prefixes;              //@synthesize prefixes=_prefixes - In the implementation block
@property (nonatomic,retain) NSArray * suffixes;              //@synthesize suffixes=_suffixes - In the implementation block
+(id)builderWithKey:(id)arg1 ;
-(id)init;
-(NSString *)key;
-(id)prediction;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(NSArray *)suffixes;
-(void)setSuffixes:(NSArray *)arg1 ;
-(void)useString:(id)arg1 forSuffixAtIndex:(unsigned long long)arg2 ;
-(NSArray *)prefixes;
-(void)setPrefixes:(NSArray *)arg1 ;
-(id)addDuetReturnedResults:(BOOL)arg1 ;
-(id)addBatchIndex:(unsigned long long)arg1 ;
-(id)prefixedSearch;
-(id)addDuetModelID;
-(id)build;
@end

