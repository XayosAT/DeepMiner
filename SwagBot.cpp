//
// Created by Christoph on 27.03.2023.
//

#include "SwagBot.h"

void SwagBot::mine(MiningSite *site) {
    for (int i = 9; i > 6; i --){
        score += site->getVal(i, pos.x, pos.y);
        site->setVal(i, pos.x, pos.y, 0);
    }
}