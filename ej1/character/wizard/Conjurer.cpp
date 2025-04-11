#include "Conjurer.h"

Conjurer::Conjurer(string name, float hp, float strength ,float defense)
    :Wizard(name, hp,strength,defense), mana(0){}

void Conjurer::magicAttack(shared_ptr<Character> enemy, int weapon){ 
    if(weapon< 0 || weapon>2 || enemy ==nullptr) throw invalid_argument("invalid argument");
    if(mana>100){
        enemy->takeDamage(getStrength(weapon)*3);
        mana =0; 
        return; 
    }  
    enemy->takeDamage(getStrength(weapon)); 
    mana+=10 ; 
}