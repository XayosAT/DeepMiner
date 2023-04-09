//
// Created by Christoph on 27.03.2023.
//

#include "CringeBot.h"

void CringeBot::mine(MiningSite *site) {

    int r = rand() % 10;
    if (r < 2){
        for (int i = 9; i >= 0; i --){
            score += site->getVal(i, pos.x, pos.y);
            site->setVal(i, pos.x, pos.y, 0);
        }
    }

}