//
//  ViewController.m
//  Patterns_21_Memento
//
//  Created by Uber on 21/06/2017.
//  Copyright © 2017 Uber. All rights reserved.
//

#import "ViewController.h"

#import "Caretaker.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];


    Caretaker *crtaker = [[Caretaker alloc] init];
    
    [crtaker changeValue];
    [crtaker saveState];
    [crtaker changeValue];
    [crtaker changeValue];
    [crtaker changeValue];
    [crtaker loadState];
}



@end
