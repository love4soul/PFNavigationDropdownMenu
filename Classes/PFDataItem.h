//
// Created by Igors Nemenonoks on 06/04/16.
// Copyright (c) 2016 Cee. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PFDataItem : NSObject
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *detail;

- (instancetype)initWithTitle:(NSString *)title detail:(NSString *)detail;

+ (instancetype)itemWithTitle:(NSString *)title detail:(NSString *)detail;


@end