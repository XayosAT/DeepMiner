//
// Created by Christoph on 27.03.2023.
//

#include "Game.h"

Game::Game() {
    site = new MiningSite();
}

void Game::start() {
    cout << "print game view" << endl;
    site->printGameView(0, 0);

    initPlayer(0);
    initPlayer(1);

    int *count0;
    int *count1;
    while (!site->isEmpty()){
        resolveRound(count0, count1);
    }

}

void Game::resolveRound(int *count0, int *count1) {


    resolveTurn(0);
    if(players[0]->getBot()->getScore() > (50*(*count0))){
        count0++;
        site->randomizePillars();
    }

    resolveTurn(1);
    if(players[1]->getBot()->getScore() > (50*(*count1))){
        count1++;
        site->randomizePillars();
    }
}

void Game::resolveTurn(int index) {
    site->printGameView(players[index]->getBot()->getPosition().x, players[index]->getBot()->getPosition().y);
    players[index]->move();
    players[index]->getBot()->mine(site);

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
        players[index] = (new Player(::atoi(&type), name));
    } else {
        players[index] = (new AI(::atoi(&type), name));
    }


}

Game::~Game() {
    delete site;
    delete players[0];
    delete players[1];
}