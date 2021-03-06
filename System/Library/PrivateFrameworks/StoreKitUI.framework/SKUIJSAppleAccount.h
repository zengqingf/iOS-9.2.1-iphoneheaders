/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIJSAppleAccount.h>
@class NSString;


@protocol SKUIJSAppleAccount <JSExport>
@property (nonatomic,readonly) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * username; 
@required
-(NSString *)identifier;
-(NSString *)accountDescription;
-(NSString *)username;
-(NSString *)DSID;

@end


@class NSString, ACAccount;

@interface SKUIJSAppleAccount : NSObject <SKUIJSAppleAccount> {

	ACAccount* _account;
	ACAccount* _nativeAccount;

}

@property (readonly) ACAccount * nativeAccount;                            //@synthesize nativeAccount=_nativeAccount - In the implementation block
@property (nonatomic,readonly) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * username; 
-(NSString *)identifier;
-(id)initWithACAccount:(id)arg1 ;
-(NSString *)accountDescription;
-(NSString *)username;
-(NSString *)DSID;
-(ACAccount *)nativeAccount;
@end

