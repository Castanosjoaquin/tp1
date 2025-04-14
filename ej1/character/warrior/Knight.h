#pragma once

#include "Warrior.h"

class Knight: public Warrior{
private:
    int guardianAngleBar; 
public:
    Knight(string name, float hp, float strength ,float defense);
    ~Knight()= default;
    void takeDamage(float damage)override;
    void angleAttack(shared_ptr<Character> enemy,int weapon =0); 
    void showInfo() override ; 
};

