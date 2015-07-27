//
//  TWAlbumTableViewController.h
//  Thousand Words
//
//  Created by Doug Ruocco on 3/10/15.
//  Copyright (c) 2015 DRoc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TWAlbumTableViewController : UITableViewController

@property (strong, nonatomic) NSMutableArray *albums;

- (IBAction)addAlbumBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
