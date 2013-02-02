//
//  DetailViewController.h
//  SampleApp
//
//  Created by Jon Armtrong on 2/1/13.
//  Copyright (c) 2013 Jon Armtrong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
