#pragma once
#include "Wizard.h"

class Conjurer : public Wizard{
private:
    float mana ;
public:
    Conjurer(string name, float hp, float strength ,float defense);
    ~Conjurer() = default;
    void magicAttack(shared_ptr<Character> enemy, int weapeon);

};