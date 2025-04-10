#pragma once

#include "MagicWeapons.h"

class Amulet: public MagicWeapons
{
private:
    float protectionPower; 
public:
    Amulet(float damage, float level, string name, float mana,float protectionPower);
    ~Amulet();
    float normalAttack()override; 
    void magicProtection(float damage);

};



