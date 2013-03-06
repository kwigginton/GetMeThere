//
//  beginningCell.h
//  Get Me There
//
//  Created by joseph schneider on 4/28/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface beginningCell : UITableViewCell{
    IBOutlet UILabel *test;
    IBOutlet UIImageView *startPicture;
    IBOutlet UIImageView *endPicture;
}
@property (nonatomic, retain) IBOutlet UIImageView *startPicture;
@property (nonatomic, retain) IBOutlet UIImageView *endPicture;
@property (nonatomic, retain) IBOutlet UILabel *test;
@end
