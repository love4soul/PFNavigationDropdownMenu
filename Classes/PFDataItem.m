//
// Created by Igors Nemenonoks on 06/04/16.
// Copyright (c) 2016 Cee. All rights reserved.
//

#import "PFDataItem.h"


@implementation PFDataItem {

}
- (instancetype)initWithTitle:(NSString *)title detail:(NSString *)detail {
    self = [super init];
    if (self) {
        _title = [title copy];
        _detail = [detail copy];
    }

    return self;
}

+ (instancetype)itemWithTitle:(NSString *)title detail:(NSString *)detail {
    return [[self alloc] initWithTitle:title detail:detail];
}

@end