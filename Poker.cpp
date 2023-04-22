#include "Poker.h"
#include "Deck.h"
#include <iostream>

std::string determineWinner(std::vector<Card>& playerHand, std::vector<Card>& dealerHand) {
    // determine player's hand rank
    // determine dealer's hand rank
    // compare hand ranks and determine winner
    return "Player";
}

// Deal out the flop (3 community cards)
void dealFlop(std::vector<Card>& communityCards, Deck& deck)
{
    for (int i = 0; i < 3; i++)
    {
        communityCards.push_back(deck.drawCard());
    }
}

// Deal out the turn (1 community card)
void dealTurn(std::vector<Card>& communityCards, Deck& deck)
{
    communityCards.push_back(deck.drawCard());
}

// Deal out the river (1 community card)
void dealRiver(std::vector<Card>& communityCards, Deck& deck)
{
    communityCards.push_back(deck.drawCard());
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
