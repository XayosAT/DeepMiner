//
// Created by Christoph on 27.03.2023.
//

#ifndef DEEPMINER_SWAGBOT_H
#define DEEPMINER_SWAGBOT_H
#include "Bot.h"

class SwagBot : public Bot{

public:
    void mine(MiningSite *site) override;
private:
    string name = "SwagBot";
};


#endif //DEEPMINER_SWAGBOT_H
