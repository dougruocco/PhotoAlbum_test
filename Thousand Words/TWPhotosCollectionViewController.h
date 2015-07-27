//
//  TWPhotosCollectionViewController.h
//  Thousand Words
//
//  Created by Doug Ruocco on 3/12/15.
//  Copyright (c) 2015 DRoc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Album.h"
#import "Photo.h"

@interface TWPhotosCollectionViewController : UICollectionViewController

@property (strong, nonatomic)Album *album;

- (IBAction)cameraBarButtonItemPressed:(UIBarButtonItem *)sender;
@end
