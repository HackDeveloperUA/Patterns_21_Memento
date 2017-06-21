//
//  Memento.h
//  Patterns_21_Memento
//
//  Created by Uber on 21/06/2017.
//  Copyright © 2017 Uber. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OriginatorState.h"

@interface Memento : NSObject

@property (nonatomic) OriginatorState *localState;

-(id) initWithState:(OriginatorState *)state;
-(OriginatorState*) getState;

@end
