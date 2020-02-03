//
//  MMFloatingDrawer.h
//  MMFloatingDrawer
//
//  Created by Mohammed Mir on 03/02/2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class MMFloatingDrawer;

typedef NS_ENUM(NSUInteger, MMFloatingDrawerDrawerState) { MMFloatingDrawerDrawerStateOpened, MMFloatingDrawerDrawerStateClosed };

typedef NS_ENUM(NSUInteger, MMFloatingDrawerDrawerDirection) { MMFloatingDrawerDrawerDirectionLeft, MMFloatingDrawerDrawerDirectionRight };

@protocol MMFloatingDrawerDelegate <NSObject>

@optional
- (void)drawerController:(MMFloatingDrawer *)drawerController stateDidChange:(MMFloatingDrawerDrawerState)drawerState;

@end


@interface MMFloatingDrawer : UIViewController

@property (copy, nonatomic, nullable) IBInspectable NSString *mainSegueIdentifier;

@property (copy, nonatomic, nullable) IBInspectable NSString *drawerSegueIdentifier;

@property (assign, nonatomic) IBInspectable CGFloat containerViewMaxAlpha;

@property (assign, nonatomic) IBInspectable NSTimeInterval drawerAnimationDuration;

@property (strong, nonatomic) UIViewController *mainViewController;

@property (strong, nonatomic) UIViewController *drawerViewController;

@property (readonly, nonatomic) UIViewController *displayingViewController;

@property (weak, nonatomic, nullable) id<MMFloatingDrawerDelegate> delegate;

@property (assign, nonatomic) MMFloatingDrawerDrawerState drawerState;

@property (assign, nonatomic) MMFloatingDrawerDrawerDirection drawerDirection;

@property (assign, nonatomic) CGFloat drawerWidth;

@property (assign, nonatomic, getter=isScreenEdgePanGestreEnabled) BOOL screenEdgePanGestreEnabled;

@property (strong, nonatomic) UITapGestureRecognizer *containerViewTapGesture;

@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture;

@property (readonly, nonatomic) UIPanGestureRecognizer *panGesture;

- (instancetype)initWithDrawerDirection:(MMFloatingDrawerDrawerDirection)drawerDirection drawerWidth:(CGFloat)drawerWidth;

- (void)setDrawerState:(MMFloatingDrawerDrawerState)drawerState animated:(BOOL)animated;


@end

NS_ASSUME_NONNULL_END
