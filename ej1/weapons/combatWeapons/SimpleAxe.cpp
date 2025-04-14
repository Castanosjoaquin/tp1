#include "SimpleAxe.h"

SimpleAxe::SimpleAxe(float damage, float level,float bleeding, string name, float power)
    :CombatWeapons(damage, level, bleeding, name), power{power}{}

SimpleAxe::~SimpleAxe(){ }

void SimpleAxe::powerAttack(){ 
    cout<<"The axe makes a power attack making "<< normalAttack()*power<< "damage"<<endl;
    bleedingPosibility(); 
}

void SimpleAxe::showInfo(){ 
    cout<<"Damage: "<< damage<<endl;
    cout<<"Level: "<< level<<endl; 
    cout<<"Name: "<< name<<endl; 
    cout<<"Bleeding posibility "<< bleeding<<endl; 
    cout<<"Power"<< power<<endl; 
}