//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSImage.h"

@interface NSImage (NTExtensions)
+ (id)imageForSystemType:(unsigned long)arg1 size:(int)arg2;
+ (id)imageForType:(unsigned long)arg1 creator:(unsigned long)arg2 size:(int)arg3;
+ (id)imageForDesc:(id)arg1 size:(int)arg2;
+ (id)iconRef:(struct OpaqueIconRef *)arg1 toImage:(int)arg2;
+ (id)iconRef:(struct OpaqueIconRef *)arg1 toImage:(int)arg2 select:(BOOL)arg3;
+ (id)iconRef:(struct OpaqueIconRef *)arg1 toImage:(int)arg2 label:(int)arg3 select:(BOOL)arg4;
+ (id)iconRef:(struct OpaqueIconRef *)arg1 toImage:(int)arg2 label:(int)arg3 select:(BOOL)arg4 alpha:(float)arg5;
+ (id)iconRef:(struct OpaqueIconRef *)arg1 toImage:(int)arg2 label:(int)arg3 highlight:(BOOL)arg4;
+ (id)iconRefForToolbar:(struct OpaqueIconRef *)arg1 label:(int)arg2 select:(BOOL)arg3;
+ (id)iconRefToToolbarImage:(struct OpaqueIconRef *)arg1;
+ (id)imageToToolbarImage:(id)arg1;
- (id)bitmapImageRepForSize:(int)arg1;
- (id)sizeIcon:(int)arg1;
- (id)pictRepresentation;
- (id)imageWithBadge:(id)arg1;
@end
