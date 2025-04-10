#include "Paladin.h"
Paladin::Paladin(string name, float hp, float strength ,float defense, float ProtectionPlus)
    :Warrior(name, hp, strength, defense),ProtectionPlus{ProtectionPlus}{ 
        if(ProtectionPlus<1|| ProtectionPlus>100)throw invalid_argument("The Protection Plus parameter must be bewteen 1 and 100");  
    }



void Paladin::takeDamage(float damage){ 
    hp-=damage-((defense*ProtectionPlus)/100); 
    if(hp<0){ 
        cout<<name<< " died"<<endl; 
    }
}