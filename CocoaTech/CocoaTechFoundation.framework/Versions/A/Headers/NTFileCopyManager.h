//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@interface NTFileCopyManager : NSObject
{
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (BOOL)doThreadedFileRequest:(id)arg1;
- (BOOL)doSyncFileRequest:(id)arg1 delegate:(id)arg2;
- (BOOL)performRequest:(BOOL)arg1 request:(id)arg2;
- (BOOL)copy:(BOOL)arg1 src:(id)arg2 positions:(id)arg3 dest:(id)arg4;
- (BOOL)move:(BOOL)arg1 src:(id)arg2 positions:(id)arg3 dest:(id)arg4;
- (BOOL)makeAlias:(id)arg1 positions:(id)arg2 dest:(id)arg3 aliasType:(int)arg4;
- (BOOL)duplicate:(id)arg1 positions:(id)arg2 inDirectory:(id)arg3;
- (BOOL)destroy:(BOOL)arg1 src:(id)arg2;
- (BOOL)destroy:(BOOL)arg1 srcArray:(id)arg2;
- (BOOL)newFolder:(id)arg1 positions:(id)arg2 permissions:(unsigned int)arg3;
- (BOOL)newFile:(id)arg1 positions:(id)arg2 permissions:(unsigned int)arg3;
- (void)exchangeFile:(id)arg1 withFile:(id)arg2;

@end
