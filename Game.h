//
// Created by Christoph on 27.03.2023.
//

#ifndef DEEPMINER_GAME_H
#define DEEPMINER_GAME_H
#include "Bot.h"
#include "MiningSite.h"
#include <vector>
#include <iostream>
using namespace std;



class Game {

public:
    Game();
    ~Game();
private:
    MiningSite miningSite;


};


#endif //DEEPMINER_GAME_H
