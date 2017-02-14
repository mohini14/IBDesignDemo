//
//  CheckBox.h
//  IBDesignDemo
//
//  Created by Mohini Sindhu  on 14/02/17.
//  Copyright © 2017 Mohini Sindhu . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CheckBox : UIControl

-(void)setText :(NSString*)stringValue;
-(void)setEnabled:(BOOL)isEnabled;
-(void)setChecked:(BOOL)isChecked;

@property IBInspectable UIColor *checkColor;
@property IBInspectable UIColor *boxBorderColor;
@property IBInspectable UIColor *boxFillColor;
@property IBInspectable UIFont *labelFont;
@property IBInspectable UIColor *labelTextColor;
@property (nonatomic,strong) IBInspectable NSString *text;
@property IBInspectable BOOL isEnabled;
@property IBInspectable BOOL isChecked;
@property IBInspectable BOOL showTextLabel;




@end
