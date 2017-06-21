//
//  Caretaker.h
//  Patterns_21_Memento
//
//  Created by Uber on 21/06/2017.
//  Copyright © 2017 Uber. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Originator.h"
#import "Memento.h"


@interface Caretaker : NSObject


@property (nonatomic, strong) Originator *originator;
@property (nonatomic, strong) Memento *memento;

-(void) changeValue;
-(void) saveState;
-(void) loadState;

@end
