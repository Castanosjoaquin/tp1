#include "Club.h"


Club::Club(float damage, float level,float bleeding, string name, float weight)
    :CombatWeapons(damage, level, bleeding, name), weight{weight}{
        if(weight<=0) throw invalid_argument("The weight must be postive");       
    }
    
Club::~Club(){}

void Club::heavyBlow(){ 
    cout<<"The "<<this->getName() <<" make a heavy blow making "<< this->normalAttack()*weight<< " damage"<<endl; 
    this->bleedingPosibility(); 
} 

void Club::showInfo(){ 
    cout<<"Damage: "<< damage<<endl;
    cout<<"Level: "<< level<<endl; 
    cout<<"Name: "<< name<<endl; 
    cout<<"Bleeding posibility "<< bleeding<<endl; 
    cout<<"Weight"<< weight<<endl; 
}