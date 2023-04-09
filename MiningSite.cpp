//
// Created by Christoph on 27.03.2023.
//

#include "MiningSite.h"

MiningSite::MiningSite() {

    grid = new vector<vector<vector<int>>>(10, vector<vector<int>>(5, vector<int>(5)));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                grid->at(i).at(j).at(k) = rand() % 9 + 1;
            }
        }
    }




}

void MiningSite::printGrid() {

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                cout << grid->at(i).at(j).at(k) << " ";
            }
            cout << endl;
        }
        cout <<  endl;
    }
//    cout << "pillar at 0, 0: " << endl;
//    printPillar(0, 0);
//    sortZAxis(0, 0, 2);
//    cout << "pillar at 0, 0 after sorting: " << endl;
//    printPillar(0, 0);
}

void MiningSite::sortZAxis(int x, int y, int order) {

    vector<int> pillar = getPillar(x, y);
    switch (order) {
        case 0:
            sort(pillar.begin(), pillar.end());
            break;
        case 1:
            sort(pillar.begin(), pillar.end(), greater<>());
            break;
        case 2:
            shuffle(pillar.begin(), pillar.end(), default_random_engine(0));
            break;
        default:
            cerr << "Invalid order" << endl;
            break;
    }

    for (int i = 0; i < 10; i++){
        grid->at(i).at(x).at(y) = pillar.at(i);
    }

}

vector<int> MiningSite::getPillar(int x, int y) {
    vector<int> pillar;
    pillar.reserve(10);
    for (int i = 0; i < 10; ++i) {
        pillar.push_back(grid->at(i).at(x).at(y));
    }
    return pillar;
}

void MiningSite::printPillar(int x, int y) {

    for(int i : getPillar(x, y)){
        cout << i << endl;
    }

}

int MiningSite::getVal(int x, int y, int z) {
    return grid->at(z).at(x).at(y);
}

void MiningSite::setVal(int x, int y, int z, int val) {
    grid->at(z).at(x).at(y) = val;
}


MiningSite::~MiningSite() {
    delete grid;
}