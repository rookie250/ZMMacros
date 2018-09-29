//
//  frameMacro.h
//  separation
//
//  Created by 周明 on 2018/9/29.
//  Copyright © 2018 周明. All rights reserved.
//

#ifndef frameMacro_h
#define frameMacro_h

/// 1px宽度
#define SINGLE_LINE_WIDTH           (1.0/[UIScreen mainScreen].scale)
#define SINGLE_LINE_ADJUST_OFFSET   ((1.0/[UIScreen mainScreen].scale)/2.0)
#define SCREEN_WIDTH    UIScreen.mainScreen.bounds.size.width
#define SCREEN_HEIGHT   UIScreen.mainScreen.bounds.size.height
#define KEY_WINDOW      UIApplication.sharedApplication.keyWindow

#endif /* frameMacro_h */
