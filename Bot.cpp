//
// Created by Christoph on 27.03.2023.
//

#include "Bot.h"

Bot::Bot() {
    position = {0, 0};
}

void Bot::move(char direction) {
    switch (direction) {
        case 'w':
            position.y++;
            break;
        case 'a':
            position.x--;
            break;
        case 's':
            position.y--;
            break;
        case 'd':
            position.x++;
            break;
        default:
            break;
    }
}

Bot::~Bot() {

}