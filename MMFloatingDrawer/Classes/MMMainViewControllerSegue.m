//
//  MMMainViewControllerSegue.m
//  MMFloatingDrawer
//
//  Created by Mohammed Mir on 03/02/2020.
//

#import "MMMainViewControllerSegue.h"
#import "MMFloatingDrawer.h"

@implementation MMMainViewControllerSegue

- (void)perform
{
    if ([self.sourceViewController isKindOfClass:[MMFloatingDrawer class]]) {
        MMFloatingDrawer *drawerController = self.sourceViewController;
        drawerController.mainViewController = self.destinationViewController;
    } else {
        NSAssert(NO, @"SourceViewController must be KYDrawerController!");
    }
}

@end
