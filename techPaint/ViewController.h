//
//  ViewController.h
//  techPaint
//
//  Created by yukihiro moriyama on 2015/02/22.
//  Copyright (c) 2015年 YukihiroMoriyama. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    UIImageView *canvas;
    
    CGPoint touchPoint;
    
    int rgb;
    
    IBOutlet UISwitch *keshigom;
    
    IBOutlet UISegmentedControl *seg;
    
    UIImageView *capture;
}

-(IBAction)save;
-(void)png;

@end

