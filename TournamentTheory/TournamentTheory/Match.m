//
//  Match.m
//  TournamentTheory
//
//  Created by Steven Pautler on 7/6/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import "Match.h"
#import "Participant.h"

@implementation Match

-(BOOL)matchIsOver {
    return _result!=nil;
}

@end


@implementation MatchResult

-(ResultValue)resultForParticipant:(Participant *)participant {
    NSNumber *result = [self.resultsDict objectForKey:participant];
    if (result) {
        return [result unsignedIntegerValue];
    } else {
        return ResultValue_NOTFOUND;
    }
}

@end