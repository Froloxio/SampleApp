//
//  MasterViewController.h
//  SampleApp
//
//  Created by Jon Armtrong on 2/1/13.
//  Copyright (c) 2013 Jon Armtrong. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
