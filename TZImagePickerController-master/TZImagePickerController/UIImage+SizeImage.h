//
//  UIImage+SizeImage.h
//  Home
//
//  Created by applemac on 17/4/10.
//  Copyright © 2017年 rzht. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SizeImage)
-(UIImage *) imageCompressForWidth:(UIImage *)sourceImage targetWidth:(CGFloat)defineWidth;
@end
