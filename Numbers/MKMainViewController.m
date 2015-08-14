//
//  MainViewController.m
//  Numbers
//
//  Created by Admin on 10.08.15.
//  Copyright (c) 2015 Mykola Korotun. All rights reserved.
//

#import "MKMainViewController.h"
#import "MKNumber.h"
#import "MKNumberCell.h"

@interface MKMainViewController ()

@end

@implementation MKMainViewController

@synthesize numbers;

-(void)viewDidLoad {
    [super viewDidLoad];
    
    self.numbers = [NSMutableArray arrayWithCapacity:10];
    
    MKNumber *numb;
    for (int i = 1; i <= 10; i++) {
        numb = [[MKNumber alloc] init];
        numb.number = i;
        numb.imageName = [NSString stringWithFormat:@"%d.png", i];
        [self.numbers addObject:numb];
    }
}


#pragma mark - Table view data source

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [self.numbers count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    MKNumberCell *cell = (MKNumberCell *)[tableView dequeueReusableCellWithIdentifier:@"NumberCell"];
    
    MKNumber *numb = (self.numbers)[indexPath.row];
    cell.txtLabel.text = [NSString stringWithFormat:@"%d", numb.number];
    cell.imgView.image = [UIImage imageNamed:numb.imageName];
    
    return cell;
}

#pragma mark - Navigation

@end
