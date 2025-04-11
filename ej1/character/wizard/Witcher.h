#pragma once 
#include "Wizard.h" 

class Witcher : public Wizard{
private:
    float magicProtection; 
public:
    Witcher(string name, float hp, float strength ,float defense, float magicProtection);
    ~Witcher() = default;
    void takeDamage(float damage);
};

