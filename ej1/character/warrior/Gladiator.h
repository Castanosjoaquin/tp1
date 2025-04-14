#pragma once 
#include "Warrior.h"

class Gladiator: public Warrior{
private:
    float survivalInstinct; 
public:
    Gladiator(string name, float hp, float strength ,float defense);
    ~Gladiator() = default;
    void gladiatorAttack(shared_ptr<Character> enemy, int weapon); 
    void showInfo() override ; 
};

