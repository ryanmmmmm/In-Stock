//
//  ISAvailabilityViewController.h
//  InStock
//
//  Created by Ahmet Alp Balkan on 10/27/13.
//  Copyright (c) 2013 Luminous Apps. All rights reserved.
//

#import <FlatUIKit/FlatUIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <AddressBook/AddressBook.h>

@interface ISAvailabilityViewController : UITableViewController <UIAlertViewDelegate, UIActionSheetDelegate, CLLocationManagerDelegate>

@property(weak, nonatomic) NSString* sku;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *btnRefresh;
//- (IBAction)refresh:(id)sender;

@end
