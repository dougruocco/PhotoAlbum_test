//
//  TWPhotoDetailViewController.h
//  Thousand Words
//
//  Created by Douglas Ruocco on 3/24/15.
//  Copyright (c) 2015 DRoc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Photo;


@interface TWPhotoDetailViewController : UIViewController

@property (strong, nonatomic) Photo *photo;

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)addFilterButtonPressed:(UIButton *)sender;
- (IBAction)deleteButtonPressed:(UIButton *)sender;

@end
