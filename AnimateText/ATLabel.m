//
//  EFLabel.m
//
//  Created by User on 12/03/13.
//
//

#import "EFLabel.h"

@implementation EFLabel
@synthesize wordList = _wordList;
@synthesize duration = _duration;

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}



- (void)animateWithWords:(NSArray *)words forDuration:(double)time {
    self.duration = time;
    if(self.wordList){
        self.wordList = nil;
    }
    self.wordList = [[NSArray alloc] initWithArray:words];
    self.text = [self.wordList objectAtIndex:0];
    [NSThread detachNewThreadSelector:@selector(_startAnimations:) toTarget:self withObject:self.wordList];
    
}

- (void) _startAnimations:(NSArray *)images {
    
    @autoreleasepool {
        
        for (uint i = 1; i < [images count]; i++) {
            sleep(self.duration);
            [self performSelectorOnMainThread:@selector(_animate:)
                                   withObject:[NSNumber numberWithInt:i]
                                waitUntilDone:YES];
            
            sleep(self.duration);
            if (i == [images count] - 1) {
                i = -1;
            }
        }
    
}
}


- (void) _animate:(NSNumber*)num
{
    
    [UIView animateWithDuration:self.duration/2 animations:^{
        self.alpha = 0.0;
        
    } completion:^(BOOL finished) {
        
        [UIView animateWithDuration:self.duration/2 animations:^{
            self.alpha = 1.0;
            self.text = [self.wordList objectAtIndex:[num intValue]];
        } completion:^(BOOL finished) {
            //sleep(5);
        }];
    }];
    
}

@end
