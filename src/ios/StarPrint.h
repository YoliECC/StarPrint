//
//  StarPrint.h
//  Star Print
//
//  Created by Shashwat Triapthi (github.com/goforgold) on 19 May 2014.
//  Copyright 2014 Shashwat Triapthi. All rights reserved.
//  MIT licensed
//

#import <Foundation/Foundation.h>


#import <Cordova/CDVPlugin.h>


@interface StarPrint : CDVPlugin {
	NSString* successCallback;
	NSString* failCallback;
	NSString* msg;

    //Options
	//NSInteger dialogLeftPos;
	//NSInteger dialogTopPos;
}

@property (nonatomic, copy) NSString* successCallback;
@property (nonatomic, copy) NSString* failCallback;
@property (nonatomic, copy) NSString* msg;

//Print Settings
//@property NSInteger dialogLeftPos;
//@property NSInteger dialogTopPos;

- (void)isPrintingAvailable: (CDVInvokedUrlCommand*)command;
- (void)print:(CDVInvokedUrlCommand*)command;

@end