//
//  ImageTableViewController.h
//  imageView
//
//  Created by JAY on 2015/10/29.
//  Copyright © 2015年 Huijun.org. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TableViewCell.h"


@interface ImageTableViewController : UITableViewController

@property  (copy, nonatomic) NSMutableArray *greekLetters;
@property (nonatomic, strong) NSMutableArray * JsonData;
@property (nonatomic, strong) NSMutableArray * ImageListData;
@property (nonatomic, strong) NSMutableArray * _imageURLs;


@end
