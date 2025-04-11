#pragma once
#include "Warrior.h"

class Paladin : public Warrior{
private:
    float ProtectionPlus; //bewteen 1 and 100
public:
    Paladin(string name, float hp, float strength ,float defense, float ProtectionPlus);
    ~Paladin() = default;
    void takeDamage(float damage)override; 
};

