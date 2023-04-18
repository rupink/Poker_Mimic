#include "Poker.h"
#include "Deck.h"
#include <iostream>

std::string determineWinner(std::vector<Card>& playerHand, std::vector<Card>& dealerHand) {
    // determine player's hand rank
    // determine dealer's hand rank
    // compare hand ranks and determine winner
    return "Player";
}

int main() {
    std::vector<Card> deck = createDeck();
    shuffleDeck(deck);

    std::vector<Card> playerHand;
    std::vector<Card> dealerHand;

    // deal two cards to player and dealer
    dealCards(deck, playerHand);
    dealCards(deck, dealerHand);
    dealCards(deck, playerHand);
    dealCards(deck, dealerHand);

    // print player's hand
    std::cout << "Player's Hand
