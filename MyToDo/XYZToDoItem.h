//
//  XYZToDoItem.h
//  MyToDo
//
//  Created by twer on 5/21/14.
//  Copyright (c) 2014 twer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@property NSDate *completedDate;
- (void)markAsCompleted:(BOOL)isComplete;

@end
