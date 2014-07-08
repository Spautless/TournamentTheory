//
//  Round.h
//  TournamentTheory
//
//  Created by Steven Pautler on 7/6/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import <Foundation/Foundation.h>

//a Round
@interface Round : NSObject

//array of Match objects
@property (strong) NSArray* matches;

- (NSUInteger) numberOfMatches;

@end
