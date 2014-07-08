//
//  SchedulingUtils.m
//  TournamentTheory
//
//  Created by Steven Pautler on 7/6/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import "SchedulingUtils.h"

@implementation SchedulingUtils

+ (NSUInteger) numberOfMatchesForRoundRobinTournamentWithNumberOfParticipants:(NSUInteger)numParticipants {
    NSUInteger n = numParticipants;
    return n*(n-1)/2;
}

@end
