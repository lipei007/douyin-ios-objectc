//
//  AwemeCollectionCell.h
//  Douyin
//
//  Created by Qiao Shi on 2018/7/30.
//  Copyright © 2018年 Qiao Shi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WebPImageView.h"
#import "Aweme.h"
@interface AwemeCollectionCell : UICollectionViewCell
@property (nonatomic, strong) WebPImageView *imageView;
@property (nonatomic, strong) UIButton *favoriteNum;

- (void)initData:(Aweme *)aweme;

@end
