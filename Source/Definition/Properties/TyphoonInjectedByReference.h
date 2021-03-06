//
// Created by Robert Gilliam on 1/3/14.
// Copyright (c) 2014 Jasper Blues. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TyphoonInjected.h"


@interface TyphoonInjectedByReference : TyphoonInjected

@property(nonatomic, strong, readonly) NSString* reference;
@property(nonatomic, readonly) BOOL proxied;

- (instancetype)initWithReference:(NSString *)reference isProxied:(BOOL)proxied;

@end