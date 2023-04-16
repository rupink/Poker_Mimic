#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

std::vector<Card> createDeck();
void shuffleDeck(std::vector<Card>& deck);
void dealCards(std::vector<Card>& deck, std::vector<Card>& hand);

#endif
