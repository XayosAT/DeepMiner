cmake_minimum_required(VERSION 3.24)
project(DeepMiner)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(DeepMiner
        Bot.cpp
        Bot.h
        CoolBot.cpp
        CoolBot.h
        CringeBot.cpp
        CringeBot.h
        main.cpp
        MiningSite.cpp
        MiningSite.h
        SwagBot.cpp
        SwagBot.h Game.h Game.cpp position.h Player.h Player.cpp AI.h AI.cpp)
