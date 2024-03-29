//
//  FLAnimatedImageView.h
//  FishLampCocoaUI
//
//  Created by Mike Fullerton on 3/11/13.
//  Copyright (c) 2013 GreenTongue Software LLC, Mike Fullerton. 
//  The FishLamp Framework is released under the MIT License: http://fishlamp.com/license 
//

#import "FLCocoaUIRequired.h"
#import "FLRotateAnimation.h"

@interface FLAnimatedImageView : NSView {
@private
    CALayer* _animationLayer;
    BOOL _animate;
    BOOL _animationIsAnimating;
    FLAnimation* _animation;
    BOOL _displayedWhenStopped;
    SDKImage* _image;
} 

@property (readwrite, strong, nonatomic) CALayer* animationLayer;
@property (readwrite, strong, nonatomic) FLAnimation* animation; // FLSomersaultAnimation by default
@property (readwrite, assign, nonatomic, getter=isDisplayedWhenStopped) BOOL displayedWhenStopped;
@property (readonly, assign, nonatomic, getter=isAnimating) BOOL animate;

- (void) startAnimating;
- (void) stopAnimating;

@property (readwrite, strong, nonatomic) SDKImage* image;
- (void) setImageWithNameInBundle:(NSString*) name;

// random!
- (void) setRespondsToGlobalNetworkActivity:(BOOL) responds;

- (void) didStartAnimating;
- (void) didStopAnimating;
- (void) willInitAnimationLayer;

@end
