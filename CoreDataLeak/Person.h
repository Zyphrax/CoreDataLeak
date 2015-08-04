//
//  Person.h
//  
//
//  Created by Mr. Test on 4/08/2015.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Pet;

@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic) int16_t age;
@property (nonatomic, retain) Pet *pets;

@end
