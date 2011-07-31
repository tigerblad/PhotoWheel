//
//  PhotoAlbumViewController.h
//  PhotoWheel
//
//  Created by Kirby Turner on 6/21/11.
//  Copyright 2011 White Peak Software Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GridView.h"
#import "PhotoBrowserViewController.h"

@interface PhotoAlbumViewController : UIViewController <UITextFieldDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, NSFetchedResultsControllerDelegate, GridViewDataSource, PhotoBrowserViewControllerDelegate>

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSManagedObjectID *objectID;
@property (nonatomic, strong) IBOutlet UITextField *textField;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *addButton;
@property (nonatomic, strong) IBOutlet GridView *gridView;
@property (nonatomic, assign, readonly) NSInteger selectedItemIndex;
@property (nonatomic, assign, readonly) CGRect selectedItemRect;
@property (nonatomic, strong, readonly) id pushFromView;

- (IBAction)action:(id)sender;
- (IBAction)addPhoto:(id)sender;
- (void)refresh;


@end
