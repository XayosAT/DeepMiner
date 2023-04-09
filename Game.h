//
// Created by Christoph on 27.03.2023.
//

#ifndef DEEPMINER_GAME_H
#define DEEPMINER_GAME_H
#include "Player.h"
#include "AI.h"
using namespace std;



class Game {

public:
    Game();
    ~Game();
    void start();
private:
    MiningSite *site;
    vector<Player*> *players;
    void initPlayer(int index);


};


#endif //DEEPMINER_GAME_H
