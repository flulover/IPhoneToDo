//
//  XYZToDoItem.m
//  MyToDo
//
//  Created by twer on 5/21/14.
//  Copyright (c) 2014 twer. All rights reserved.
//

#import "XYZToDoItem.h"

@implementation XYZToDoItem

-(void)markAsCompleted:(BOOL)isComplete
{
    self.completed = isComplete;
    if (isComplete) {
        self.completedDate = [NSDate date];
    }
}

@end
