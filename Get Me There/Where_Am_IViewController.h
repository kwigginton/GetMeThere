//
//  Where_Am_IViewController.h
//  Get Me There
//
//  Created by joseph schneider on 4/10/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#import <CoreData/CoreData.h>

#import <UIKit/UIKit.h>


@interface Where_Am_IViewController : UITableViewController<UITabBarDelegate, UITableViewDataSource> {
    NSFetchedResultsController *_fetchedResultsController;
}
    -(IBAction) informationButtonPressed;
    -(IBAction) GuardianButtonPressed;
    //-(UIImage *)findLargeImage:(NSString *) imgurl;
    @property (nonatomic, strong) NSManagedObjectContext *context;
    @property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@end
