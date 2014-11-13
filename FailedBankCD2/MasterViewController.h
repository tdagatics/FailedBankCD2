//
//  MasterViewController.h
//  FailedBankCD2
//
//  Created by Anthony Dagati on 11/13/14.
//  Copyright (c) 2014 Black Rail Capital. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

