//
// Created by Christoph on 27.03.2023.
//

#include "CringeBot.h"

void CringeBot::mine(MiningSite *site) {


    int pSize = site->getPillarSize(pos.x, pos.y);
    for (int i = 0; i < pSize; i++){
        int r = rand() % 10;
        if (r < 5){
            score += site->getVal(pos.x, pos.y);
        }
    }

}