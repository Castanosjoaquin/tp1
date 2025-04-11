#pragma once
//robatr vida
#include "Wizard.h"

class Necromancer : public Wizard{
private:
    float vampirism; 
public:
    Necromancer(string name, float hp, float strength ,float defense, float vampirism);
    ~Necromancer() = default; 
    void lifeSteal(shared_ptr<Character> enemy, int weapon =0); 

};
