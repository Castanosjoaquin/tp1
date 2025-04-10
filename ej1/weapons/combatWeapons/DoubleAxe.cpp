#include "DoubleAxe.h"

DoubleAxe::DoubleAxe(float damage, float level,float bleeding, string name) 
    :CombatWeapons(damage,level,bleeding,name),sharpness(20){ }

DoubleAxe::~DoubleAxe(){}


void DoubleAxe::DoubleAttack(){ 
    cout<<"the double attack make "<< normalAttack()<< " damage, The axes got a little dull."<<endl; 
    sharpness-=5; 
    bleedingPosibility(); 
}

void DoubleAxe::sharp(){ 
    cout<<"you have just sharpened the axes"<<endl;
    sharpness =20; 
}


float DoubleAxe::normalAttack(){  
    return (damage*level)+sharpness ; 
}
