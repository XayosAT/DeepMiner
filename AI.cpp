//
// Created by Christoph on 31.03.2023.
//

#include "AI.h"

AI::AI(int bot, string name) : Player(bot, name) {

}

void AI::move() {
    char direction = 'i';
    while (!validMove(direction)) {
        int r = rand() % 5;
        switch (r) {
            case 0:
                direction = 'w';
                break;
            case 1:
                direction = 'a';
                break;
            case 2:
                direction = 's';
                break;
            case 3:
                direction = 'd';
                break;
            case 4:
                direction = 'q';
                break;
        }
    }
    bot->move(direction);


}

AI::~AI() {
    delete bot;
}