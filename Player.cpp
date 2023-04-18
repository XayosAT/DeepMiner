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
    this->name = name;

}

void Player::move() {
    char direction;
    cout << "Please enter a move: w(up), a(left), s(down), d(right), q(stay):";
    cin >> direction;
    while (!validMove(direction)) {
        cout << "Please enter a valid move: ";
        cin >> direction;
    }
    bot->move(direction);
}

bool Player::validMove(char direction) const {
    Position pos = bot->getPosition();
    switch (direction) {
        case 'w':
            if (pos.y + 1 < 5) {
                return true;
            }
            break;
        case 'a':
            if (pos.x - 1 >= 0) {
                return true;
            }
            break;
        case 's':
            if (pos.y - 1 >= 0) {
                return true;
            }
            break;
        case 'd':
            if (pos.x + 1 < 5) {
                return true;
            }
            break;
        case 'q':
            return true;
        default:
            return false;
    }
    return false;
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

