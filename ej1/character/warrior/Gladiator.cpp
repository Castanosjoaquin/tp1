#include "Gladiator.h"

Gladiator::Gladiator(string name, float hp, float strength ,float defense)
    :Warrior(name,hp,strength,defense), survivalinstinct(100){}

void Gladiator::gladiatorAttack(shared_ptr<Character> enemy,int weapon){
    if(weapon< 0 || weapon>2 || enemy ==nullptr) throw invalid_argument("invalid argument");
    if(survivalinstinct ==0){ 
        enemy->takeDamage(getStrength(weapon)*3);
    }
    enemy->takeDamage(getStrength(weapon)); 
    survivalinstinct-=10; 
}
