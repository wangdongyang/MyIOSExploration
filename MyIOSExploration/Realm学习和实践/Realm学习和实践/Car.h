//
//  Car.h
//  Realm学习和实践
//
//  Created by wdy on 2017/6/29.
//  Copyright © 2017年 wdy. All rights reserved.
//

#import <Realm/Realm.h>

@class User;
@interface Car : RLMObject
@property NSString * carName;
@property  User * user;


@end
