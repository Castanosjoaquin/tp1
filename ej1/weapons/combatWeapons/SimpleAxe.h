#pragma once
#include "CombatWeapons.h"
class SimpleAxe: public CombatWeapons
{
private:
    float power;     
public:
    SimpleAxe (float damage, float level,float bleeding, string name, float power);
    ~SimpleAxe();
    void powerAttack();
};