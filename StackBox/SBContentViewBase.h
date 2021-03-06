//
//  SBContentViewBase.h
//  StackBoxDemo
//
//  Created by Torin on 14/10/12.
//  Copyright (c) 2012 Torin Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBContentViewBase : UIView

//Subclass should use this delegate to pass events & data back to parent class
@property (nonatomic, unsafe_unretained) id delegate;

//Minimum UI, intended for demo
@property (nonatomic, strong) UIImageView * backgroundImageView;
@property (nonatomic, strong) UILabel * titleLabel;
@property (nonatomic, strong) UIButton *rightButton;

- (void)reset;
- (void)configureWithTag:(NSInteger)newTag;

- (void)showSummaryMode:(CGFloat)duration newBounds:(CGRect)newBounds;
- (void)showExtendedMode:(CGFloat)duration newBounds:(CGRect)newBounds;

@end
