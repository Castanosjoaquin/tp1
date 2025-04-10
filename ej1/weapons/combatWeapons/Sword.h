#pragma once 

#include "CombatWeapons.h"

class Sword: public CombatWeapons
{
private:
    float charge;
public:
    Sword (float damage, float level,float bleeding, string name);
    ~Sword();
    void swordAttack();

    
};