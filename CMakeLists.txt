cmake_minimum_required(VERSION 3.19)
project(Blackjack)

set(CMAKE_CXX_STANDARD 20)

add_executable(Blackjack main.cpp main.h hand.cpp hand.h card.cpp card.h)