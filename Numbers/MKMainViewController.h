//
//  MainViewController.h
//  Numbers
//
//  Created by Admin on 10.08.15.
//  Copyright (c) 2015 Mykola Korotun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MKMainViewController : UITableViewController

#warning Вью контроллер не должен заниматься хранением данных. Это ответственность датасорса. Он должен создавать и хранить в себе все модели. Вью контроллер же создает датасорс, и затем спрашивает его в методах UITableViewDetaSource, сколько в датасорсе всего моделей и какая модель есть под конкретным индексом.
@property (strong, nonatomic) NSMutableArray *numbers;

@end
