//
//  MKNumber.h
//  Numbers
//
//  Created by Admin on 10.08.15.
//  Copyright (c) 2015 Mykola Korotun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MKNumber : NSObject

#warning Не нудно показывать readwrite свойства в *.h файле, так их может кто угодно изменить извне. В *.h показывайте свойства как readonly, а уже в *.m как readwrite. А для заполнения модели данными напишите кастомный init, который параметрами будет принимать дынные

@property (nonatomic, assign) int number;
@property (strong, nonatomic) NSString *imageName;

@end
