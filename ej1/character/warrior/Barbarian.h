#pragma once
#include "Warrior.h"

class Barbarian: public Warrior{ 
private:
    float rageBar; 
public:
    Barbarian(string name, float hp, float strength ,float defense);
    ~Barbarian()=default;
    void rageAttack(shared_ptr<Character> enemy,int weapon =0);
    void showInfo() override ; 
};






