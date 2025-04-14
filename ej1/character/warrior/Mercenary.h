#pragma once

#include "Warrior.h"

class Mercenary : public Warrior{
private:
   float luck; 
public:
    Mercenary(string name, float hp, float strength ,float defense,float luck);
    ~Mercenary() = default;
    void takeDamage(float damage) override; 
    void showInfo() override ; 
};
