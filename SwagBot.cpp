//
// Created by Christoph on 27.03.2023.
//

#include "SwagBot.h"

void SwagBot::mine(MiningSite *site) {
    for (int i = 0; i < 3; i++){
        score += site->getVal(pos.x, pos.y);
    }
}