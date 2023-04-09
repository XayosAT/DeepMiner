//
// Created by Christoph on 27.03.2023.
//

#ifndef DEEPMINER_MININGSITE_H
#define DEEPMINER_MININGSITE_H
#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

class MiningSite {

public:
    MiningSite();
    ~MiningSite();
    vector<vector<vector<int>>> getGrid();
    void printGrid();
    vector<int> getPillar(int x, int y);
    void printPillar(int x, int y);
    vector<vector<int>> getLayer(int z);
    void printLayer(int z);
    void sortZAxis(int x, int y, int order);
    int getVal(int x, int y, int z);
    void setVal(int x, int y, int z, int val);

private:
    vector<vector<vector<int>>> *grid;

};


#endif //DEEPMINER_MININGSITE_H
