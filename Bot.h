//
// Created by Christoph on 27.03.2023.
//

#ifndef DEEPMINER_BOT_H
#define DEEPMINER_BOT_H
#include <vector>
#include "position.h"
using namespace std;

class Bot {

public:
    Bot();
    virtual ~Bot();
    int getScore();
    Position getPosition();
protected:
    Position position;
    int score = 0;

    void move(char direction);
    virtual void mine(vector<int> pillar) = 0;
};


#endif //DEEPMINER_BOT_H
