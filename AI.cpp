//
// Created by Christoph on 31.03.2023.
//

#include "AI.h"

AI::AI(int bot, string name) : Player(bot, name) {

}

AI::~AI() {
    delete bot;
}