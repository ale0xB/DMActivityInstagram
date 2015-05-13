//
//  DMColorPickerView.h
//  DMActivityInstagram
//
//  Created by Cory Alder on 2013-09-23.
//  Copyright (c) 2013 Cory Alder. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DMColorPickerDelegate <NSObject>

-(IBAction)changeColor:(id)sender;

@end

@interface DMColorPickerView : UIView

@property (nonatomic, weak) id <DMColorPickerDelegate> delegate;
@property (nonatomic, strong) NSArray *colors;
@property (assign, nonatomic) BOOL roundedButtons;

@end
