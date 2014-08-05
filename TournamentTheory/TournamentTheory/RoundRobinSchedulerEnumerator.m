//
//  RoundRobinSchedulerEnumerator.m
//  TournamentTheory
//
//  Created by Steven Pautler on 7/12/14.
//  Copyright (c) 2014 Steven Pautler. All rights reserved.
//

#import "RoundRobinSchedulerEnumerator.h"

@implementation RoundRobinParticipantLinkedList

- (void) concatNode:(RoundRobinParticipantNode*)node {
    self.tail.nextNode = node;
    node.lastNode = self.tail;
    self.tail = node;
}

- (void) removeNode:(RoundRobinParticipantNode *)node {
    node.nextNode.lastNode = node.lastNode;
    node.lastNode.nextNode = node.nextNode;
}

@end

@implementation RoundRobinParticipantNode
@end


@implementation RoundRobinSchedulerEnumerator

+(RoundRobinSchedulerEnumerator *)enumeratorFromParticipants:(NSArray *)participants {
    if (!participants.count) {
        return nil;
    }
    
    
}

- (Match*) nextMatch {
    return nil;
}

@end

















