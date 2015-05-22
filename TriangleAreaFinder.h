//
//  TriangleAreaFinder.h
//  Conversion equations
//
//  Created by Anna Embree on 5/21/15.
//  Copyright (c) 2015 Anna Embree. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TriangleAreaFinder : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *TriangleBase;

@property (weak, nonatomic) IBOutlet UITextField *TriangleHeight;

@property (weak, nonatomic) IBOutlet UILabel *AnswerLabel;


- (IBAction)TriangleSolveButton:(id)sender;

@end
