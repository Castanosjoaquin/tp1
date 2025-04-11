#pragma once
#include "Warrior.h"

class Barbarian: public Warrior{ 
private:
    float rageBar; 
public:
    Barbarian(string name, float hp, float strength ,float defense);
    ~Barbarian()=default;
    void rageAttack(shared_ptr<Character> enemy,float weapon =0);
};


