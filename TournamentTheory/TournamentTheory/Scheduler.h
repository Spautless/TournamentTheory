//
//  Scheduler.h
//  TournamentTheory
//
//  Created by Steven Pautler on 7/6/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import <Foundation/Foundation.h>

//a simple tiered linked list data structure built to enumerate
//pairs of participants in a "balanced manner".
//To be "balanced" means every matchup created consists of those
//two participants which have been waiting the longest since their
//last matchup.
@class Schedule, Match, Round;
@interface Scheduler : NSObject

+ (Scheduler*) schedulerWithParticipants:(NSArray*)participants
                 numberOfMatchesPerRound:(NSUInteger)numMatchesPerRound;

- (Match*) nextMatch;
- (BOOL) hasNextMatch;
- (Round*) nextRound;
- (BOOL) hasNextRound;

@property (strong) NSArray *participants;
@property (assign) NSUInteger matchesPerRound;

//this method uses a tiered linked list for creating a balanced red robin tourney
+ (Schedule*) balancedRoundRobinTournamentWithParticipants:(NSArray*)participants
                                   numberOfMatchesPerRound:(NSUInteger)numMatchesPerRound;



@end
