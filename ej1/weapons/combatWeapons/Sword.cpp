#include "Sword.h"

Sword::Sword(float damage, float level,float bleeding, string name)
    :CombatWeapons(damage,level, bleeding,name ),charge(3){}
    
Sword::~Sword(){}


void Sword::swordAttack(){ 
    if(charge==0){ 
        cout<<"The sword make a charge attack making "<< normalAttack()*3<<"damage"<<endl; 
        charge = 3; 
    }
    else 
        cout<<"The sword make "<< normalAttack()<< " damage"<<endl; 
        charge -=1; 
    bleedingPosibility(); 
}
