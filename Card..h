#ifndef CARD_H
#define CARD_H

#include <string>

struct Card {
    int value;
    std::string suit;
};

void printCard(Card card);

#endif
