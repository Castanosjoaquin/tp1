#pragma once
#include "Wizard.h"

class Sorcerer : public Wizard{
private:
    float magicPower; 
public:
    Sorcerer(string name, float hp, float strength ,float defense, float magicPower);
    ~Sorcerer() = default;
    void magicAttack(shared_ptr<Character> enemy, int weapon); 
};

