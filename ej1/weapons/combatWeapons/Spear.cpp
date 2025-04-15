#include "Spear.h"

Spear:: Spear(float damage, float level,float bleeding, string name, float velocity)
    :CombatWeapons(damage, level, bleeding, name), velocity{velocity}{
        if(velocity<=0) throw invalid_argument("Velocity must be greater than 0");
    }

Spear::~Spear(){}

void Spear::speedAttack(){ 
    cout<<"The spear make a really quick attack that gain a lot kinetic energy making "<<normalAttack()*(velocity*velocity)*0.5<< "damage"<<endl; 
    bleedingPosibility();
}
void Spear::showInfo(){ 
    cout<<"Damage: "<< damage<<endl;
    cout<<"Level: "<< level<<endl; 
    cout<<"Name: "<< name<<endl; 
    cout<<"Bleeding posibility "<< bleeding<<endl; 
    cout<<"Velocity"<< velocity<<endl; 
}

