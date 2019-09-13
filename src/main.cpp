#include <game.h>
#include <iostream>

static const char *const HEADER = "\nBlackjack © 2019 Daniel Cook.\n\n";
static const char *const USAGE = "Usage:\n\t./blackjack\n\nDescription:\n\tPlays an interactive game of blackjack against a dealer.\n";

int main(int argc, const char *argv[])
{
    // Print out copyright
    std::cout << HEADER;

    // Ensure the correct number of parameters are used
    if (argc > 1)
    {
        std::cout << USAGE;
        return 1;
    }

    // Initialise the game, will create the shoe of decks
    Game game = Game();

    bool continuePlaying = true;

    while (continuePlaying)
    {
        Result result = game.play();

        switch (result)
        {
            case CustomerWin:
                std::cout << "You Won!\n";
                break;
            case DealerWin:
                std::cout << "Dealer Won!\n";
                break;
            case Draw:
                std::cout << "Game was a draw\n";
                break;
        }

        std::cout << "Would you like to play again? (y/n)\n";
        char playAgain;
        std::cin >> playAgain;
        if (playAgain != 'y')
        {
            continuePlaying = false;
        }
    }

    return 0;
}
