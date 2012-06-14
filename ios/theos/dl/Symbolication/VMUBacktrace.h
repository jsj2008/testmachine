/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class VMUSymbolicator;

@interface VMUBacktrace : NSObject {
	int _flavor;
	struct {
		struct {
			double t_begin;
			double t_end;
			double weight;
			int pid;
			unsigned thread_id;
			unsigned char cpu_num;
			BOOL supervisor;
		} context;
		unsigned* frames;
		unsigned length;
		VMUSymbolicator* symbolLookup;
		double* counts;
	} _callstack;
}
// inherited: +(void)initialize;
+(void)flush;
-(id)initWithTask:(unsigned)task thread:(unsigned)thread is64Bit:(BOOL)bit;
// inherited: -(void)dealloc;
// inherited: -(id)description;
-(void)fixupStackWithTask:(unsigned)task symbolicator:(id)symbolicator;
-(void)fixupStackWithTask:(unsigned)task symbolicator:(id)symbolicator symbolicate:(BOOL)symbolicate;
-(BOOL)hasSameCallstack:(id)callstack;
-(unsigned)topmostFrame;
-(void)removeTopmostFrame;
-(void)setStartTime:(double)time;
-(void)setEndTime:(double)time;
-(void)setLengthTime:(double)time;
-(unsigned*)backtrace;
-(unsigned)backtraceLength;
-(unsigned)thread;
-(int)threadState;
@end
