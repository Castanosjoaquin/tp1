#include "Gladiator.h"

Gladiator::Gladiator(string name, float hp, float strength ,float defense)
    :Warrior(name,hp,strength,defense), survivalInstinct(100){}

void Gladiator::gladiatorAttack(shared_ptr<Character> enemy,int weapon){
    if(weapon< 0 || weapon>2 || enemy ==nullptr) throw invalid_argument("invalid argument");
    if(survivalInstinct ==0){ 
        enemy->takeDamage(getStrength(weapon)*3);
    }
    enemy->takeDamage(getStrength(weapon)); 
    survivalInstinct-=10; 
}



void Gladiator::showInfo(){ 
    cout<<"Name: "<<name<<endl; 
    cout<<"Hp: "<<hp<<endl; 
    cout<<"Strength: "<<strength<<endl; 
    cout<<"Defense: "<<defense<<endl; 
    cout<<"Survival instinct: " <<survivalInstinct<<endl; 
}