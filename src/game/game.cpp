#include "game.h"
#include "dealer.h"
#include "customer.h"

Game::Game(): shoe_(4)
{
    // No action required
}

Result Game::play()
{
    Dealer dealer = Dealer(shoe_.dealCard(), shoe_.dealCard());
    Customer customer = Customer(shoe_.dealCard(), shoe_.dealCard());

    // Customer goes first
    while (customer.getAction(dealer.getCardOne()) != Stick)
    {
        customer.receiveCard(shoe_.dealCard());
    }

    // If customer over 21, dealer wins
    if (customer.getTotal() > 21)
    {
        return DealerWin;
    }

    // Dealer goes second
    while (dealer.getAction(customer.getCardOne()) != Stick)
    {
        dealer.receiveCard(shoe_.dealCard());
    }

    // Determine who has won, no need to check customer total is 21 or under as this was done earlier
    if (dealer.getTotal() > 21 || customer.getTotal() > dealer.getTotal())
    {
        return CustomerWin;
    }
    else if (dealer.getTotal() > customer.getTotal())
    {
        return DealerWin;
    }
    else
    {
        return Draw;
    }

}
