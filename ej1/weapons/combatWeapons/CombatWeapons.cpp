
#include "CombatWeapons.h"	

CombatWeapons::CombatWeapons(float damage, float level,float bleeding,string name )
    :damage{damage}, level{level},bleeding{bleeding}, name{name}{ 
        if(bleeding<0 || bleeding>1) throw invalid_argument("the bleeding argument must be between 0 and1");
        if(damage<0) throw invalid_argument("the damage argument must be postive o equal to 0");
        if(level<0) throw invalid_argument("the level argument must be postive o equal to 0");
    }


    
float CombatWeapons::normalAttack(){  
    return damage*level; 
}

float CombatWeapons::getDamage(){ 
    return damage; 
}

string CombatWeapons::getName(){ 
    return name; 
}

float CombatWeapons::getLevel(){ 
    return level; 
}

void CombatWeapons:: bleedingPosibility(){ 
    srand(time(0));
    float random_number = static_cast<float>(rand()) / RAND_MAX;

    if(random_number <=bleeding){ 
        cout<<"the "<<getName() <<" caused a bleeding, making 10 of damage per second during 20 seconds"<<endl; 
    }
}
