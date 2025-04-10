#pragma once 

#include "CombatWeapons.h"

class Spear: public CombatWeapons{
private:
    float velocity; 
public:
    Spear(float damage, float level,float bleeding, string name, float velocity);
    ~Spear();
    void speedAttack(); 
};   