//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenu.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface NSMenuWithTag : NSMenu <NSCopying, NSCoding>
{
    unsigned int _menuTag;
}

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMenuTag:(unsigned int)arg1;
- (unsigned int)menuTag;

@end

