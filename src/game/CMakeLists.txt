cmake_minimum_required(VERSION 3.2)
project(game C CXX)

set(SOURCE_FILES
        game.h game.cpp card.h card.cpp shoe.h shoe.cpp hand.h hand.cpp player.h player.cpp customer.h customer.cpp dealer.h dealer.cpp)

add_library(game SHARED STATIC ${SOURCE_FILES})

install(TARGETS game DESTINATION ${BLACKJACK_INSTALL_LIB_DIR})
install(FILES game.h DESTINATION ${BLACKJACK_INSTALL_INCLUDE_DIR})
