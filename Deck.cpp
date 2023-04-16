#include "Deck.h"
#include <algorithm>
#include <ctime>
#include <cstdlib>

std::vector<Card> createDeck() {
    std::vector<Card> deck;
    std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    for (std::string suit : suits) {
        for (int i = 1; i <= 13; i++) {
            Card card;
            card.value = i;
            card.suit = suit;
            deck.push_back(card);
        }
    }
    return deck;
}

void shuffleDeck(std::vector<Card>& deck) {
    srand(time(0));
    for (int i = 0; i < deck.size(); i++) {
        int j = rand() % deck.size();
        std::swap(deck[i], deck[j]);
    }
}

void dealCards(std::vector<Card>& deck, std::vector<Card>& hand) {
    hand.push_back(deck.back());
    deck.pop_back();
}
