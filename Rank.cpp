#include <vector>
#include "Card.h"

// Returns the rank of a poker hand
// Returns an integer representing the rank of the hand, where a higher number represents a stronger hand
int getHandRank(std::vector<Card> hand)
{
    int rank = 0;

    // Sort the hand by rank
    std::sort(hand.begin(), hand.end());

    // Check for flush (all cards are the same suit)
    bool flush = true;
    for (int i = 1; i < hand.size(); i++)
    {
        if (hand[i].suit != hand[0].suit)
        {
            flush = false;
            break;
        }
    }

    // Check for straight (five cards of consecutive rank)
    bool straight = true;
    for (int i = 1; i < hand.size(); i++)
    {
        if (hand[i].rank != hand[i-1].rank + 1)
        {
            straight = false;
            break;
        }
    }

    // Check for straight flush (straight and flush)
    if (straight && flush)
    {
        rank = 9;
    }
    // Check for four of a kind (four cards of the same rank)
    else if (hand[0].rank == hand[3].rank || hand[1].rank == hand[4].rank)
    {
        rank = 8;
    }
    // Check for full house (three of a kind and a pair)
    else if ((hand[0].rank == hand[1].rank && hand[2].rank == hand[4].rank) ||
             (hand[0].rank == hand[2].rank && hand[3].rank == hand[4].rank))
    {
        rank = 7;
    }
    // Check for flush
    else if (flush)
    {
        rank = 6;
    }
    // Check for straight
    else if (straight)
    {
        rank = 5;
    }
    // Check for three of a kind
    else if (hand[0].rank == hand[2].rank || hand[1].rank == hand[3].rank || hand[2].rank == hand[4].rank)
    {
        rank = 4;
    }
    // Check for two pairs
    else if ((hand[0].rank == hand[1].rank && hand[2].rank == hand[3].rank) ||
             (hand[0].rank == hand[1].rank && hand[3].rank == hand[4].rank) ||
             (hand[1].rank == hand[2].rank && hand[3].rank == hand[4].rank))
    {
        rank = 3;
    }
    // Check for one pair
    else if (hand[0].rank == hand[1].rank || hand[1].rank == hand[2].rank ||
             hand[2].rank == hand[3].rank || hand[3].rank == hand[4].rank)
    {
        rank = 2;
    }
    // High card (none of the above)
    else
    {
        rank = 1;
    }

    return rank;
}
