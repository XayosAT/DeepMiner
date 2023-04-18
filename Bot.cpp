//
// Created by Christoph on 27.03.2023.
//

#include "Bot.h"

void Bot::move(char direction) {

    switch (direction) {
        case 'w':
            pos.y++;
            break;
        case 'a':
            pos.x--;
            break;
        case 's':
            pos.y--;
            break;
        case 'd':
            pos.x++;
            break;
        case 'q':
            break;
        default:
            cerr << "Invalid move" << endl;
            break;
    }
}

string Bot::getName() {
    return this->name;
}

int Bot::getScore() const {
    return score;
}

Position Bot::getPosition() {
    return pos;
}

