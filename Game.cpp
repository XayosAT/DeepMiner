//
// Created by Christoph on 27.03.2023.
//

#include "Game.h"

Game::Game() {
    site = new MiningSite();
    site->printGrid();

}

void Game::start() {

    initPlayer(0);
    initPlayer(1);
    for (int i = 0; i < players->size(); i++) {
        Player *tmp = players->at(i);
        cout << "Player "<< i << " :" << tmp->getName() << " chose bot " << tmp->getBot()->getName() << endl;
    }
}

void Game::initPlayer(int index) {
    cout << "Player " << index << " please enter your name: ";
    string name;
    cin >> name;
    char input;
    char type;
    cout << "What type of bot do you want to use? CoolBot (1), SwagBot (2), CringeBot (3): ";
    cin >> type;
    while (type != '1' && type != '2' && type != '3') {
        cout << "Please enter a valid input: ";
        cin >> type;
    }
    cout << "Would you like to play yourself or let the computer play? (y/n): ";
    cin >> input;
    while (input != 'y' && input != 'n') {
        cout << "Please enter a valid input: ";
        cin >> input;
    }
    if (input == 'y') {
        players->push_back(new Player(2, name));
    } else {
        players->push_back(new AI(::atoi(&type), name));
    }


}

Game::~Game() {
    delete site;
    delete[] players;
}