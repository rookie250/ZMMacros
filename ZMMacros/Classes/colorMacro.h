//
//  colorMacro.h
//  separation
//
//  Created by 周明 on 2018/9/4.
//  Copyright © 2018年 周明. All rights reserved.
//

#ifndef colorMacro_h
#define colorMacro_h

// UIColor
#define RGBAlpha(r, g, b, a) [UIColor colorWithRed:((CGFloat)(r) / 255.0) green:((CGFloat)(g) / 255.0) blue:((CGFloat)(b) / 255.0) alpha:(a)]
#define RGB(r, g, b) RGBAlpha(r, g, b, 1.0)
#define HexRGBAlpha(rgbValue, a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]
#define HexRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#endif /* colorMacro_h */

