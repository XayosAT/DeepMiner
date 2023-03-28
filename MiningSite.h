//
// Created by Christoph on 27.03.2023.
//

#ifndef DEEPMINER_MININGSITE_H
#define DEEPMINER_MININGSITE_H
#include <vector>
#include <iostream>
using namespace std;

class MiningSite {

public:
    MiningSite();
    ~MiningSite();
    void mine(int x, int y, int z);
    vector<vector<vector<int>>> getGrid();
    void printGrid();

private:
    vector<vector<vector<int>>> grid = vector<vector<vector<int>>>(5, vector<vector<int>>(5, vector<int>(10)));
};


#endif //DEEPMINER_MININGSITE_H
