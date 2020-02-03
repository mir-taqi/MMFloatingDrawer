//
//  MMFloatingDrawerSegue.m
//  MMFloatingDrawer
//
//  Created by Mohammed Mir on 03/02/2020.
//

#import "MMFloatingDrawerSegue.h"
#import "MMFloatingDrawer.h"

@implementation MMFloatingDrawerSegue

- (void)perform
{
    if ([self.sourceViewController isKindOfClass:[MMFloatingDrawer class]]) {
        MMFloatingDrawer *drawerController = self.sourceViewController;
        drawerController.drawerViewController = self.destinationViewController;
    } else {
        NSAssert(NO, @"SourceViewController must be MMFloatingDrawer!");
    }
}
@end
