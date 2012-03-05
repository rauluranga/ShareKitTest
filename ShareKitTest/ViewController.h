//
//  ViewController.h
//  ShareKitTest
//
//  Created by Raul Uranga on 3/5/12.
//  Copyright (c) 2012 GrupoW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UIImageView *myImageView;
    IBOutlet UIToolbar *myToolBar;
}

@property(nonatomic, retain) IBOutlet UIImageView *myImageView;
@property(nonatomic, retain) IBOutlet UIToolbar *myToolBar;;

-(IBAction)share:(UIBarButtonItem*)sender;


@end
