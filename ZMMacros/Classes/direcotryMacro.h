//
//  direcotryMacro.h
//  separation
//
//  Created by 周明 on 2018/9/29.
//  Copyright © 2018 周明. All rights reserved.
//

#ifndef direcotryMacro_h
#define direcotryMacro_h

#define kUserDefaults      [NSUserDefaults standardUserDefaults]
#define kPathTemp NSTemporaryDirectory()
#define kPathDocument [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]
#define kPathCache [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]

#endif /* direcotryMacro_h */
