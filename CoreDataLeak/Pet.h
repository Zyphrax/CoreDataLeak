//
//  Pet.h
//  
//
//  Created by Mr. Test on 4/08/2015.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class NSManagedObject;

@interface Pet : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSManagedObject *owner;

@end
