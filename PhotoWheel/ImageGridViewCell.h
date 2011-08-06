//
//  ImageGridViewCell.h
//  PhotoWheel
//
//  Created by Kirby Turner on 7/18/11.
//  Copyright 2011 White Peak Software Inc. All rights reserved.
//

#import "GridView.h"

@interface ImageGridViewCell : GridViewCell

@property (nonatomic, assign, getter = isSelected) BOOL selected;

+ (ImageGridViewCell *)imageGridViewCellWithSize:(CGSize)size;

- (id)initWithSize:(CGSize)size;
- (void)setImage:(UIImage *)image withShadow:(BOOL)shadow;

@end