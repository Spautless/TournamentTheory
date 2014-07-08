//
//  Scheduler.h
//  TournamentTheory
//
//  Created by Steven Pautler on 7/6/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Schedule;
@interface Scheduler : NSObject

- (Schedule*) balancedRoundRobinTournamentWithParticipants:(NSArray*)participants
                                   numberOfMatchesPerRound:(NSUInteger)numMatchesPerRound;

@end
