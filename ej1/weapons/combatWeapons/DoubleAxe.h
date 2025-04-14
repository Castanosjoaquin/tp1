#pragma once

#include "CombatWeapons.h"
class DoubleAxe: public CombatWeapons
{
private:
    float sharpness; 
public:
    DoubleAxe(float damage, float level,float bleeding, string name);
    ~DoubleAxe();
    float normalAttack()override; 
    void DoubleAttack();
    void sharp();
    void showInfo() override;
};