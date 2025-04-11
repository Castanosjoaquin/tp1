#pragma once

#include "MagicWeapons.h"

class Amulet: public MagicWeapons
{
private:
    float protectionPower; 
public:
    Amulet(float damage, float level, string name, float mana,float protectionPower);
    ~Amulet()= default;
    void magicProtection(float damage);

};



