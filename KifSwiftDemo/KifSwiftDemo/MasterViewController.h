//
//  MasterViewController.h
//  KifSwiftDemo
//
//  Created by Rob Saunders on 25/11/2014.
//  Copyright (c) 2014 Rob Saunders. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

