//
//  Scheduler.m
//  TournamentTheory
//
//  Created by Steven Pautler on 7/6/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import "Scheduler.h"
#import "Schedule.h"
#import "SchedulingUtils.h"

@interface Scheduler ()

@property (assign) NSUInteger numMatchesEnumerated;
@property (assign) NSUInteger numMatches;

@end

@implementation Scheduler

+ (Scheduler*) schedulerWithParticipants:(NSArray*)participants
                 numberOfMatchesPerRound:(NSUInteger)numMatchesPerRound {
    Scheduler *aScheduler = [Scheduler new];
    aScheduler.participants = participants;
    aScheduler.matchesPerRound = numMatchesPerRound;
    aScheduler.numMatchesEnumerated = 0;
    aScheduler.numMatches = [SchedulingUtils numberOfMatchesForRoundRobinTournamentWithNumberOfParticipants:participants.count];
    return aScheduler;
}

- (Match*) nextMatch {
    if ([self hasNextMatch]) {
        //get the next match
        
        self.numMatchesEnumerated++;
    }
    return nil;
}

- (BOOL) hasNextMatch {
    return self.numMatchesEnumerated < self.numMatches;
}

- (Round*) nextRound {
    if ([self hasNextRound]) {
        //get the next round
    }
    return nil;
}

- (BOOL) hasNextRound {
    return [self hasNextMatch];
}

+ (Schedule*) balancedRoundRobinTournamentWithParticipants:(NSArray*)participants
                                   numberOfMatchesPerRound:(NSUInteger)numMatchesPerRound {
    return nil;
}

@end
