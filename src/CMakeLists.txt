cmake_minimum_required(VERSION 3.2)
project(blackjack)

add_subdirectory(game)
set(SOURCE_FILES main.cpp)

add_executable(blackjack ${SOURCE_FILES})
target_link_libraries(blackjack game)
install(TARGETS blackjack DESTINATION ${BLACKJACK_INSTALL_BIN_DIR})
