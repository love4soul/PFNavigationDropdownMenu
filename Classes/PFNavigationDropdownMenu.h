//
//  PFNavigationDropdownMenu.h
//  PFNavigationDropdownMenu
//
//  Created by Cee on 02/08/2015.
//  Copyright (c) 2015 Cee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PFDataItem;

@interface PFNavigationDropdownMenu : UIView
@property (nonatomic, assign) CGFloat cellHeight;
@property (nonatomic, strong) UIColor *cellBackgroundColor;
@property (nonatomic, strong) UIColor *cellTextLabelColor;
@property (nonatomic, strong) UIFont *cellTextLabelFont;
@property (nonatomic, strong) UIColor *cellSelectionColor;
@property (nonatomic, strong) UIImage *checkMarkImage;
@property (nonatomic, strong) UIImage *arrowImage;
@property (nonatomic, assign) CGFloat arrowPadding;
@property (nonatomic, assign) NSTimeInterval animationDuration;
@property (nonatomic, strong) UIColor *maskBackgroundColor;
@property (nonatomic, strong) UIColor *titleColor;
@property (nonatomic, assign) CGFloat maskBackgroundOpacity;
@property (nonatomic, copy) void(^didSelectItemAtIndexHandler)(NSUInteger indexPath);
@property (nonatomic, copy) void(^menuShowHandler)();
@property (nonatomic, copy) void(^menuHideHandler)();
@property (nonatomic, assign, readonly) BOOL isShown;
- (instancetype)initWithFrame:(CGRect)frame
                        title:(NSString *)title
                        items:(NSArray <PFDataItem *>*)items
                containerView:(UIView *)containerView;

- (void)hide;
@end
