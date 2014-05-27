//
//  ATLabel.h
//
// Created by Karthikeya Udupa on 7/14/13.
// Copyright (c) 2012 Karthikeya Udupa K M All rights reserved.

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <UIKit/UIKit.h>


/**
 `ATAnimationType` is a list of animaton type.
 */
enum {
    ATAnimationTypeFadeInOut = 1,
    ATAnimationTypeSlideLeftInLeftOut = 2,
    ATAnimationTypeSlideRightInRightOut = 3,
    ATAnimationTypeSlideTopInTopOut = 4,
    ATAnimationTypeSlideBottomtInBottomOut = 5,
    ATAnimationTypeSlideLeftInRightOut = 6,
    ATAnimationTypeSlideRightInLeftOut = 7,
    ATAnimationTypeSlideBottomInTopOut = 8,
    ATAnimationTypeSlideTopInBottomOut = 9
};
typedef NSUInteger ATAnimationType;

/**
 `ATLabel` provides an interface to change words in an animated way.
 */
@interface ATLabel : UILabel

/**
 `wordList` is the list of words that has to be shuffled.
 */
@property(nonatomic, retain) NSArray *wordList;

/**
 `duration` duration of the animation.
 */
@property(nonatomic, assign) double duration;

/**
 `ATAnimationType` for animation of the text.
 */
@property(nonatomic, assign) ATAnimationType animationType;

///---------------------------
/// @name Animating function for the label's extension.
///---------------------------

/**
 *  Animate the words from the list
 *
 *  @param words list of words.
 *  @param time  total duration of the animation between each switch.
 */
- (void)animateWithWords:(NSArray *)words forDuration:(double)time;

/**
 *  Animation with the type of animation type.
 *
 *  @param words     list of words.
 *  @param time      total duration of the animation between each switch.
 *  @param animation type of animation
 */
- (void)animateWithWords:(NSArray *)words forDuration:(double)time withAnimation:(ATAnimationType)animation;

@end
