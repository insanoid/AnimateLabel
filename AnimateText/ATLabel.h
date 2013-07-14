//
//  EFLabel.h
//
//  Created by User on 12/03/13.
//
//

#import <UIKit/UIKit.h>

@interface EFLabel : UILabel {
    
}
@property(nonatomic,retain) NSArray *wordList;
@property(nonatomic,assign) double duration;

- (void)animateWithWords:(NSArray *)words forDuration:(double)time;
@end
