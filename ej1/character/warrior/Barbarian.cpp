#include "Barbarian.h"

Barbarian::Barbarian(string name, float hp, float strength ,float defense)
    :Warrior(name, hp, strength, defense), rageBar(0){ 
        if(rageBar<=0) throw invalid_argument("The rage bar parameter must be postive");  
    }

void Barbarian::rageAttack(shared_ptr<Character> enemy,int weapon ){ 
    if(weapon< 0 || weapon>2 || enemy ==nullptr) throw invalid_argument("invalid argument");
    if(rageBar==100){
        enemy->takeDamage(getStrength(weapon)+ 2*rageBar);
        rageBar=0; 
        return;
    }
    enemy->takeDamage(getStrength(weapon)+ rageBar);
    rageBar+=10; 
}


void Barbarian::showInfo(){ 
    cout<<"Name: "<<name<<endl; 
    cout<<"Hp: "<<hp<<endl; 
    cout<<"Strength: "<<strength<<endl; 
    cout<<"Defense: "<<defense<<endl; 
    cout<<"Percentage of the rage bar : " <<rageBar<<endl; 
}


