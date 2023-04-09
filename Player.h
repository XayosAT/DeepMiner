//
// Created by Christoph on 31.03.2023.
//

#ifndef DEEPMINER_PLAYER_H
#define DEEPMINER_PLAYER_H
#include "Bot.h"
#include "SwagBot.h"
#include "CoolBot.h"
#include "CringeBot.h"

class Player {

public:
    Bot *getBot() const;
    Player(int bot, string name);
    ~Player();
    string getName();

protected:
    Bot *bot;
    string name;
};


#endif //DEEPMINER_PLAYER_H
