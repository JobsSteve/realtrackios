//
//  RTViewController.h
//  RealTrack
//
//  Created by Chenheli Hua on 10/15/13.
//  Copyright (c) 2013 Peace Corps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RTLogo.h"
#import "RTButton.h"

@interface RTIndexViewController : UIViewController

@property (strong, nonatomic) IBOutlet RTLogo *logo;

@property (strong, nonatomic) IBOutlet RTButton *enterData;

@property (strong, nonatomic) IBOutlet RTButton *myActivities;

@property (strong, nonatomic) IBOutlet RTButton *pending;

@end