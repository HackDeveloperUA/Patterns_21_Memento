//
//  Originator.h
//  Patterns_21_Memento
//
//  Created by Uber on 21/06/2017.
//  Copyright © 2017 Uber. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OriginatorState.h"

@interface Originator : NSObject

@property OriginatorState *localState;

-(void) changeValues;
-(OriginatorState *) getState;
-(void) setState:(OriginatorState *)oldState;

@end
