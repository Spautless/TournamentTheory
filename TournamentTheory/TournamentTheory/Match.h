//
//  Match.h
//  TournamentTheory
//
//  Created by Steven Pautler on 7/6/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import <Foundation/Foundation.h>



@class MatchResult, Participant;

@interface Match : NSObject

//returns an array of Participant objects
@property (strong) NSArray *participants;

//returns the result
@property (strong) MatchResult *result;

//need to see if the match is over?
- (BOOL) matchIsOver;

@end


typedef enum : NSUInteger {
    ResultValue_NotYetDecided,
    ResultValue_Loss,
    ResultValue_Win,
    ResultValue_Draw,
    ResultValue_NOTFOUND,
} ResultValue;
typedef NSNumber Result;

@interface MatchResult : NSObject

//a dictionary of results consisting of {key=participant, value=Result}
//example {ParticipantA, [NSNumber numberWithUnsignedInt:ResultValue_Loss]}
//or nil if matchIsOver==NO
@property (strong) NSDictionary *resultsDict;

- (ResultValue) resultForParticipant:(Participant*)participant;

@end
