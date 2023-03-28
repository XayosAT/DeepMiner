//
// Created by Christoph on 27.03.2023.
//

#include "MiningSite.h"

MiningSite::MiningSite() {

    int pillar = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            for (int k = 0; k < grid[i][j].size(); ++k) {
                grid[i][j][k] = pillar;
            }
            pillar++;
        }
    }
}

vector<vector<vector<int>>> MiningSite::getGrid() {
    return grid;
}

void MiningSite::printGrid() {
    for(vector<vector<int>> i : grid){
        for(vector<int> j : i){
            for(int k : j){
                cout << k << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

MiningSite::~MiningSite() {


}
