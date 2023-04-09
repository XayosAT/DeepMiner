//
// Created by Christoph on 27.03.2023.
//

#include "Bot.h"

void Bot::move() {
    char direction;
    cout << "Please enter a move: w(up), a(left), s(down), d(right), q(stay):";
    cin >> direction;
    while (!validMove(direction)) {
        cout << "Please enter a valid move: ";
        cin >> direction;
    }
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

bool Bot::validMove(char direction) const {
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
            cerr << "Invalid move" << endl;
            break;
    }
    return false;

}

string Bot::getName() {
    return name;
}

int Bot::getScore() const {
    return score;
}

Position Bot::getPosition() {
    return pos;
}

