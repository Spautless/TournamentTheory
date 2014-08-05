//
//  RoundRobinSchedulerEnumerator.h
//  TournamentTheory
//
//  Created by Steven Pautler on 7/12/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Match, Participant, RoundRobinParticipantNode;
@interface RoundRobinParticipantLinkedList : NSObject

//the head node points to the next LinkedList
@property (strong) RoundRobinParticipantNode *head;
@property (strong) RoundRobinParticipantNode *tail;

- (void) concatNode:(RoundRobinParticipantNode*)node;
- (void) removeNode:(RoundRobinParticipantNode*)node;


@end


@interface RoundRobinParticipantNode : NSObject

@property (strong) Participant *participant;
@property (strong) RoundRobinParticipantLinkedList *nextTier; //goes up one tier
@property (strong) RoundRobinParticipantNode *nextNode;
@property (strong) RoundRobinParticipantNode *lastNode;

@end

//This enumerator manages a tree of linked lists.
//All participant nodes in the rootLinkedList have been
//waiting the longest since their last match

@interface RoundRobinSchedulerEnumerator : NSObject

@property (strong) RoundRobinParticipantLinkedList *rootLinkedList;

+ (RoundRobinSchedulerEnumerator*) enumeratorFromParticipants:(NSArray*)participants;

- (Match*) nextMatch;

@end


