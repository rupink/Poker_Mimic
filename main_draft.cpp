#include <iostream>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Rank.h"

int main()
{
    Deck deck;
    deck.shuffle();

    int player1Money = 100;
    int player2Money = 100;
    int pot = 0;
    int currentBet = 0;
    std::vector<Card> communityCards;

    // Pre-flop
    std::cout << "Pre-flop" << std::endl;
    std::vector<Card> player1Hand = {deck.drawCard(), deck.drawCard()};
    std::vector<Card> player2Hand = {deck.drawCard(), deck.drawCard()};
    std::cout << "Player 1's hand: ";
    for (auto card : player1Hand) {
        std::cout << card.toString() << " ";
    }
    std::cout << std::endl;
    std::cout << "Player 2's hand: ";
    for (auto card : player2Hand) {
        std::cout << card.toString() << " ";
    }
    std::cout << std::endl;

    // First betting street (pre-flop)
    while (true)
    {
        // Player 1's turn
        std::cout << "Player 1's turn" << std::endl;
        std::cout << "Pot: " << pot << std::endl;
        std::cout << "Player 1's money: " << player1Money << std::endl;
        std::cout << "Current bet: " << currentBet << std::endl;
        std::cout << "Enter bet amount (0 to check): ";
        int bet;
        std::cin >> bet;

        if (bet == 0)
        {
            std::cout << "Player 1 checks" << std::endl;
            break;
        }
        else if (bet < currentBet)
        {
            std::cout << "Bet must be at least " << currentBet << std::endl;
            continue;
        }
        else if (bet > player1Money)
        {
            std::cout << "Not enough money" << std::endl;
            continue;
        }

        player1Money -= bet;
        pot += bet;
        currentBet = bet;

        // Player 2's turn
        std::cout << "Player 2's turn" << std::endl;
        std::cout << "Pot: " << pot << std::endl;
        std::cout << "Player 2's money: " << player2Money << std::endl;
        std::cout << "Current bet: " << currentBet << std::endl;
        std::cout << "Enter bet amount (0 to check): ";
        std::cin >> bet;

        if (bet == 0)
        {
            std::cout << "Player 2 checks" << std::endl;
            break;
        }
        else if (bet < currentBet)
        {
            std::cout << "Bet must be at least " << currentBet << std::endl;
            continue;
        }
        else if (bet > player2Money)
        {
            std::cout << "Not enough money" << std::endl;
            continue;
        }

        player2Money -= bet;
        pot += bet;
        currentBet = bet;
    }
