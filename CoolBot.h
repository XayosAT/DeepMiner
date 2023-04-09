//
// Created by Christoph on 27.03.2023.
//

#ifndef DEEPMINER_COOLBOT_H
#define DEEPMINER_COOLBOT_H
#include "Bot.h"

class CoolBot : public Bot{

public:
    void mine(MiningSite *site) override;
private:
    string name = "CoolBot";
};


#endif //DEEPMINER_COOLBOT_H
