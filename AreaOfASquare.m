//
//  AreaOfASquare.m
//  Conversion equations
//
//  Created by Anna Embree on 5/21/15.
//  Copyright (c) 2015 Anna Embree. All rights reserved.
//

#import "AreaOfASquare.h"

@interface AreaOfASquare ()

@end

@implementation AreaOfASquare

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)ConversionAction:(id)sender
{
    int SquareArea;
    
    SquareArea = [self.SquareSideVar.text intValue] * [self.SquareSideVar.text intValue];
    
    self.SquareAreaLabel.text = [NSString stringWithFormat:@"%d",SquareArea];
    
}
@end
