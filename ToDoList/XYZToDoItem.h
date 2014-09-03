//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Justin Sharps on 2014/09/02.
//  Copyright (c) 2014年 Bardic Productions. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString * itemName;
@property BOOL completed;
@property (readonly) NSDate *creationData;

@end
