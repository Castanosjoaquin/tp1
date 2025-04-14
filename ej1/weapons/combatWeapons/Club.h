#pragma once  

#include "CombatWeapons.h"

class Club: public CombatWeapons
{
private:
    float weight;
public:
    Club(float damage, float level,float bleeding, string name,float weight);
    ~Club();
    void heavyBlow(); 
    void showInfo() override;
};
 