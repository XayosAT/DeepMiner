//
// Created by Christoph on 27.03.2023.
//

#include "MiningSite.h"

MiningSite::MiningSite() {

    grid = new vector<vector<vector<int>>>(5, vector<vector<int>>(5, vector<int>(10)));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 10; k++) {
                grid->at(i).at(j).at(k) = rand() % 9 + 1;
            }
        }
    }




}

void MiningSite::printGrid() {

    for (int i = 0; i < grid->size(); i++) {
        for (int j = 0; j < grid->at(i).size(); j++) {
            for (int k = 0; k < grid->at(i).at(j).size(); k++) {
                cout << grid->at(i).at(j).at(k) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
//    cout << "pillar at 0, 0: " << endl;
//    printPillar(0, 0);
//    sortZAxis(0, 0, 2);
//    cout << "pillar at 0, 0 after sorting: " << endl;
//    printPillar(0, 0);


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

    for (int i = 0; i < pillar.size() ; i++){
        grid->at(x).at(y).at(i) = pillar.at(i);
    }

}

vector<int> MiningSite::getPillar(int x, int y) {
    return grid->at(x).at(y);
}

void MiningSite::printPillar(int x, int y) {

    for(int i : getPillar(x, y)){
        cout << i << endl;
    }

}

int MiningSite::getVal(int x, int y, int z) {
    int val = grid->at(x).at(y).at(z);
    grid->at(x).at(y).erase(grid->at(x).at(y).begin() + z);
    return val;
}

int MiningSite::getVal(int x, int y) {
    if (grid->at(x).at(y).size() > 0) {
        int val = grid->at(x).at(y).back();
        grid->at(x).at(y).pop_back();
        return val;
    } else {
        return 0;
    }
}

void MiningSite::setVal(int x, int y, int z, int val) {
    grid->at(x).at(y).at(z) = val;
}

int MiningSite::getPillarSize(int x, int y) {
    return grid->at(x).at(y).size();
}


MiningSite::~MiningSite() {
    delete grid;
}