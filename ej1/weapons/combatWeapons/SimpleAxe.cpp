#include "SimpleAxe.h"

SimpleAxe::SimpleAxe(float damage, float level,float bleeding, string name, float power)
    :CombatWeapons(damage, level, bleeding, name), power{power}{}

SimpleAxe::~SimpleAxe(){ }

void SimpleAxe::powerAttack(){ 
    cout<<"The axe a power attack making "<< normalAttack()*power<< "damage"<<endl;
    bleedingPosibility(); 
}
