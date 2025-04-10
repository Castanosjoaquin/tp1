#pragma once 

#include "MagicWeapons.h"

class Potion: public MagicWeapons
{
private:
    float healingPower; 
public:
    Potion (float damage, float level, string name, float mana, float healingPower);
    ~Potion();
    void heal(); 
};