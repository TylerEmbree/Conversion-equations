//
//  AreaOfASquare.h
//  Conversion equations
//
//  Created by Anna Embree on 5/21/15.
//  Copyright (c) 2015 Anna Embree. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AreaOfASquare : UIViewController


- (IBAction)ConversionAction:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *SquareSideVar;

@property (weak, nonatomic) IBOutlet UILabel *SquareAreaLabel;

@end
