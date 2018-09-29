//
//  logicMacro.h
//  separation
//
//  Created by 周明 on 2018/9/29.
//  Copyright © 2018 周明. All rights reserved.
//

#ifndef logicMacro_h
#define logicMacro_h

#define kStringIsEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil || [str length] < 1 ? YES : NO )
#define kArrayIsEmpty(arr) (arr == nil || [arr isKindOfClass:[NSNull class]] || arr.count == 0)
#define kDictIsEmpty(dic) (dic == nil || [dic isKindOfClass:[NSNull class]] || dic.allKeys == 0)
#define kObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))

#endif /* logicMacro_h */
