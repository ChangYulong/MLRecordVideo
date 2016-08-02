//
//  MLRecordProgressView.h
//  MLRecordVideo
//
//  Created by shanghaikedu on 16/7/28.
//  Copyright © 2016年 Langmuir. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLRecordProgressView : UIView

@property (nonatomic, assign) CGFloat progress; //当前进度
@property (nonatomic, strong) UIColor * progressBgColor;  //进度条背景颜色
@property (nonatomic, strong) UIColor * progressColor; //进度条颜色
@property (nonatomic, assign) CGFloat loadProgress; //加载好的进度
@property (nonatomic, strong) UIColor * loadProgressColor; //已经加载好的进度颜色

@end
