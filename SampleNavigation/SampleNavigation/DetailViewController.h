//
//  DetailViewController.h
//  SampleNavigation
//
//  Created by Manisha on 17/07/13.
//  Copyright (c) 2013 Manisha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
