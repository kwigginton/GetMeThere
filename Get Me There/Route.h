//
//  Route.h
//  Get Me There
//
//  Created by joseph schneider on 4/20/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Event;

@interface Route : NSManagedObject {
@private
}
@property (nonatomic, strong) NSString * DestinationPicture;
@property (nonatomic, retain) NSString * Name;
@property (nonatomic, strong) NSString * StartPicture;
@property (nonatomic, retain) NSSet *Event;
@property (nonatomic, retain) NSNumber *Row;
@end

@interface Route (CoreDataGeneratedAccessors)

- (void)addEventObject:(Event *)value;
- (void)removeEventObject:(Event *)value;
- (void)addEvents:(NSSet *)values;
- (void)removeEvents:(NSSet *)values;
@end
