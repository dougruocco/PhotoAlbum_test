//
//  TWCoreDataHelper.m
//  Thousand Words
//
//  Created by Douglas Ruocco on 3/11/15.
//  Copyright (c) 2015 DRoc. All rights reserved.
//

#import "TWCoreDataHelper.h"

@implementation TWCoreDataHelper

+(NSManagedObjectContext *)managedObjectContext
{
    NSManagedObjectContext *context = nil;
    id delegate = [[UIApplication sharedApplication] delegate];
    
    if ([delegate performSelector:@selector(managedObjectContext)]){
        context = [delegate managedObjectContext];
    }
    
    return context;
}

@end
