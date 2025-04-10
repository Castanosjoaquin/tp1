#pragma once 

#include "MagicWeapons.h"

class MagicStaff: public MagicWeapons
{
private:
    float age;
public:
    MagicStaff (float damage, float level, string name, float mana, float age);
    ~MagicStaff();
    void ancientAttack(); 
};