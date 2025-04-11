#include "Sorcerer.h" 

Sorcerer::Sorcerer(string name, float hp, float strength ,float defense, float magicPower)
    :Wizard(name, hp, strength, defense), magicPower{magicPower}{ 
        if(magicPower<0) throw invalid_argument("magic power must be positive");
    }

void Sorcerer:: magicAttack(shared_ptr<Character> enemy, int weapon){ 
    if(weapon< 0 || weapon>2 || enemy ==nullptr) throw invalid_argument("invalid argument");
    enemy->takeDamage(getStrength(weapon)*magicPower*0.5); 
}