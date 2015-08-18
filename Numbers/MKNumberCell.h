//
//  NumberCell.h
//  Numbers
//
//  Created by Admin on 10.08.15.
//  Copyright (c) 2015 Mykola Korotun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MKNumberCell : UITableViewCell

#warning не нужно показывать аутлеты в здесь. Это детали внутренней реализации класса. Перенесите их в *.m и добавьте публичный метод вроде setupWithNumber:, в котором ячейка сама себя заполнит моделью
@property (nonatomic, weak) IBOutlet UILabel *txtLabel;
@property (nonatomic, weak) IBOutlet UIImageView *imgView;

@end
