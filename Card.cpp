#include "Card.h"
#include <iostream>

void printCard(Card card) {
    std::string value;
    switch(card.value) {
        case 1:
            value = "Ace";
            break;
        case 11:
            value = "Jack";
            break;
        case 12:
            value = "Queen";
            break;
        case 13:
            value = "King";
            break;
        default:
            value = std::to_string(card.value);
            break;
    }
    std::cout << value << " of " << card.suit << std::endl; )
