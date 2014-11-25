//
//  DetailViewController.h
//  KifSwiftDemo
//
//  Created by Rob Saunders on 25/11/2014.
//  Copyright (c) 2014 Rob Saunders. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

