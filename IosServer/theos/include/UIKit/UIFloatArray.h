/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>
#import "UIKit-Structs.h"


@interface UIFloatArray : NSObject {
  int _count;
  int _gapCount;
  int* _gaps;
  float _gapValue;
  float _minValue;
  union {
    float singleton;
    float* array;
  } _values;
  struct {
    unsigned valueIsSingleton : 1;
    unsigned hideGaps : 1;
    unsigned unused : 30;
  } _floatArrayFlags;
}
-(BOOL)_setupValuesWithCount:(int)count singleValue:(float)value isRefresh:(BOOL)refresh;
-(BOOL)_setupValuesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;
-(BOOL)_setupGapIndexesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;
-(BOOL)_setupWithDataProvider:(id)dataProvider valueIsSingleton:(BOOL)singleton singletonValue:(float)value isRefresh:(BOOL)refresh;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(BOOL)refreshWithDataProvider:(id)dataProvider singleValue:(float)value;
-(BOOL)refreshWithDataProvider:(id)dataProvider;
-(float)singleValue;
-(float)minValue;
-(int)valueCount;
-(float)sum;
-(CGPoint)offsetsForIndex:(int)index;
-(CGPoint)offsetsForGapIndex:(int)gapIndex;
-(XXStruct_7U_TLD)_indexesViaSingletonFromOffset:(float)offset toOffset:(float)offset2;
-(XXStruct_7U_TLD)_indexesViaArrayFromOffset:(float)offset toOffset:(float)offset2;
-(XXStruct_7U_TLD)indexesFromOffset:(float)offset toOffset:(float)offset2;
-(int)indexForGapIndex:(int)gapIndex;
-(void)hideGaps:(BOOL)gaps;
@end

