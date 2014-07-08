//
//  Schedule.h
//  TournamentTheory
//
//  Created by Steven Pautler on 7/6/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Schedule : NSObject

//array of Round objects
@property (strong) NSArray* rounds;

- (NSUInteger) numberOfRounds;

@end
