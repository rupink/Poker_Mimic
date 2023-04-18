#ifndef POKER_RANKINGS_H
#define POKER_RANKINGS_H

#include <vector>
#include "Card.h"

// Returns the rank of a poker hand
// Returns an integer representing the rank of the hand, where a higher number represents a stronger hand
int getHandRank(std::vector<Card> hand);

#endif
