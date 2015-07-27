//
//  Photo.h
//  Thousand Words
//
//  Created by Douglas Ruocco on 3/24/15.
//  Copyright (c) 2015 DRoc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Album;

@interface Photo : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) id image;
@property (nonatomic, retain) Album *albumBook;

@end
