/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSParseObject.h>

@class IKCSSToken;

@interface IKCSSParseToken : IKCSSParseObject {

	IKCSSToken* _token;

}

@property (nonatomic,retain) IKCSSToken * token;              //@synthesize token=_token - In the implementation block
-(id)init;
-(id)description;
-(IKCSSToken *)token;
-(void)setToken:(IKCSSToken *)arg1 ;
@end

