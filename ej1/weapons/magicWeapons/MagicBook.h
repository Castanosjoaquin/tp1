#pragma once 

#include "MagicWeapons.h"

class MagicBook: public MagicWeapons
{
private:
    float magicPower; 
public:
    MagicBook (float damage, float level, string name, float mana,float magicPower);
    ~MagicBook();
    void magicAttack(); 

};

