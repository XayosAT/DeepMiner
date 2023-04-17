//
// Created by Christoph on 27.03.2023.
//

#include "CoolBot.h"

void CoolBot::mine(MiningSite *site) {

    site->sortZAxis(pos.x, pos.y, 0);
    score += site->getVal(pos.x, pos.y);

}