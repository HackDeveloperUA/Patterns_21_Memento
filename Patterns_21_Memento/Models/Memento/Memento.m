//
//  Memento.m
//  Patterns_21_Memento
//
//  Created by Uber on 21/06/2017.
//  Copyright © 2017 Uber. All rights reserved.
//

#import "Memento.h"

@implementation Memento


-(id) initWithState:(OriginatorState *)state
{
    self = [super init];
    _localState = [[OriginatorState alloc] init];
    [_localState setIntValue:state.intValue];
    [_localState setStringValue:state.stringValue];
    return self;
}

-(OriginatorState *) getState
{
    return _localState;
}


@end
