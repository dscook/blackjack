#include <game.h>
#include <iostream>

static const char *const HEADER = "\nBlackjack © 2019 Daniel Cook.\n\n";
static const char *const USAGE = "Usage:\n\t./blackjack\n\nDescription:\n\tPlays an interactive game of blackjack against a dealer.\n";

int main(int argc, const char *argv[]) {

    // Print out copyright
    std::cout << HEADER;

    // Ensure the correct number of parameters are used
    if (argc > 1) {
        std::cout << USAGE;
        return 1;
    }

    // TODO: Implement blackjack

    return 0;
}
