//
//  XYZToDoListTableViewController.h
//  MyToDo
//
//  Created by twer on 5/21/14.
//  Copyright (c) 2014 twer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZToDoListTableViewController : UITableViewController

@property NSMutableArray *toDoItems;

-(IBAction)unwindToList:(UIStoryboardSegue *)segue;

@end
