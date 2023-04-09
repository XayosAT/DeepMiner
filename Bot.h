//
// Created by Christoph on 27.03.2023.
//

#ifndef DEEPMINER_BOT_H
#define DEEPMINER_BOT_H
#include <vector>
#include "position.h"
#include <iostream>
#include <algorithm>
#include "MiningSite.h"
using namespace std;

class Bot {

public:
    Bot() = default;
    virtual ~Bot() = default;
    int getScore() const;
    Position getPosition();
    string getName();

protected:
    Position pos = {0,0};
    int score = 0;
    string name;

    void move();
    virtual void mine(MiningSite *site) = 0;
    bool validMove(char direction) const;
};


#endif //DEEPMINER_BOT_H
