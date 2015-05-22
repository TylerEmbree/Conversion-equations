//
//  Trapezoid.h
//  Conversion equations
//
//  Created by Anna Embree on 5/22/15.
//  Copyright (c) 2015 Anna Embree. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Trapezoid : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *BaseOne;


@property (weak, nonatomic) IBOutlet UITextField *BaseTwo;

@property (weak, nonatomic) IBOutlet UITextField *Height;

@property (weak, nonatomic) IBOutlet UILabel *AnswerLabel;


- (IBAction)ConversionButton:(id)sender;

@end
