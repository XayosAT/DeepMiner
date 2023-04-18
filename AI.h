//
// Created by Christoph on 31.03.2023.
//

#ifndef DEEPMINER_AI_H
#define DEEPMINER_AI_H
#include "Player.h"

class AI : public Player{

public:
    AI(int bot, string name);
    ~AI();
    void move() override;
};


#endif //DEEPMINER_AI_H
