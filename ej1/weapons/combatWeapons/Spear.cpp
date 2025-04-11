#include "Spear.h"

Spear:: Spear(float damage, float level,float bleeding, string name, float velocity)
    :CombatWeapons(damage, level, bleeding, name), velocity{velocity}{}

Spear::~Spear(){}

void Spear::speedAttack(){ 
    cout<<"The spear make a really quick attack that gain a lot kinetic energy making "<<normalAttack()*(velocity*velocity)*0.5<< "damage"<<endl; 
    bleedingPosibility();
}
