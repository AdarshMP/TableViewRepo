//
//  SettingsViewController.h
//  TableviewExample
//
//  Created by awsuser8 on 20/08/13.
//  Copyright (c) 2013 aws. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingsViewController : UITableViewController <UICollectionViewDelegate>

- (IBAction)LocationManagerSwitch:(id)sender;

- (IBAction)LocationManagerSwitch:(id)sender;

@property (weak, nonatomic) IBOutlet UISwitch *LocationManagerSwitch;

@end


@interface LSCell : UITableViewCell

@end