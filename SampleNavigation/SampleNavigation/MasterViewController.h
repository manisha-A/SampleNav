//
//  MasterViewController.h
//  SampleNavigation
//
//  Created by Manisha on 17/07/13.
//  Copyright (c) 2013 Manisha. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
