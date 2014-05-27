AnimateLabel
==========================================
Basic animating label which keeps changing its text from an array of text. Various types of animations are available.

* ATAnimationTypeFadeInOut
* ATAnimationTypeSlideLeftInLeftOut
* ATAnimationTypeSlideRightInRightOut
* ATAnimationTypeSlideTopInTopOut
* ATAnimationTypeSlideBottomtInBottomOut
* ATAnimationTypeSlideLeftInRightOut
* ATAnimationTypeSlideRightInLeftOut
* ATAnimationTypeSlideBottomInTopOut
* ATAnimationTypeSlideTopInBottomOut
* 

```objective-c
  [self.animatedLabel animateWithWords:@[
                                         @"Alabama",
                                         @"Alaska",
                                         @"Arizona",
                                         @"Arkansas",
                                         @"California",
                                         @"Colorado"
                                       ]
                           forDuration:3.0f
                         withAnimation:ATAnimationTypeSlideTopInBottomOut];
```
