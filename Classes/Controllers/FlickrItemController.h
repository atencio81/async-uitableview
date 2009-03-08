//
//  FlickrItemController.h
//  AsyncTable
//
//  Created by Adrian on 3/8/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FlickrItemDelegate.h"

@class FlickrItem;

@interface FlickrItemController : UIViewController <FlickrItemDelegate>
{
@private
    IBOutlet UIImageView *photoView;
    IBOutlet UIActivityIndicatorView *scrollingWheel;
    IBOutlet UIButton *saveButton;
    FlickrItem *item;
}

@property (nonatomic, retain) FlickrItem *item;

- (IBAction)save;

@end