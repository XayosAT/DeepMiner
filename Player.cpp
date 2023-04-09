//
// Created by Christoph on 31.03.2023.
//

#include "Player.h"

Player::Player(int bot, string name) {
    switch (bot) {
        case 1:
            this->bot = new SwagBot();
            break;
        case 2:
            this->bot = new CoolBot();
            break;
        case 3:
            this->bot = new CringeBot();
            break;
    }

}

Bot *Player::getBot() const {
    return bot;
}

string Player::getName() {
    return name;
}


Player::~Player() {
    delete bot;
}

