//
// Created by Christoph on 27.03.2023.
//

#ifndef DEEPMINER_CRINGEBOT_H
#define DEEPMINER_CRINGEBOT_H
#include "Bot.h"

class CringeBot : public Bot {

public:
    void mine(MiningSite *site) override;
private:
    string name = "CringeBot";
};


#endif //DEEPMINER_CRINGEBOT_H
