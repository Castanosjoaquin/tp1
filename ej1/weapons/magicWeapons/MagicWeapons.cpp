#pragma once
#include "MagicWeapons.h"



MagicWeapons:: MagicWeapons(float damage, float level, string name, float mana)
    :damage{damage}, level{level}, name{name}, manaConsume{mana}{
        if(damage<0) throw invalid_argument("the damage argument must be postive o equal to 0");
        if(level<0) throw invalid_argument("the level argument must be postive o equal to 0");
        if(manaConsume<0) throw invalid_argument("the level argument must be postive o equal to 0");
    
    }



    
float MagicWeapons::normalAttack(){ 
    return damage*level;
}

float MagicWeapons::getManaConsume(){
    return manaConsume; 
}

float MagicWeapons::getLevel(){ 
    return level; 
}

float MagicWeapons::getDamage(){ 
    return damage; 
}

string MagicWeapons::getName(){ 
    return name; 
}