//
//  Bus+CoreDataProperties.h
//  CoreDataTest
//
//  Created by YANGJINMING on 15/11/16.
//  Copyright © 2015年 YANGJINMING. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Bus.h"

NS_ASSUME_NONNULL_BEGIN

@interface Bus (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *longitude;
@property (nullable, nonatomic, retain) NSString *latitude;

@end

NS_ASSUME_NONNULL_END
