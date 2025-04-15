#pragma once

#include "../Weapons.h"

class MagicWeapons : public Weapons {
protected:
    float damage; 
    float level; 
    string name; 
    float manaConsume; 

public:
    MagicWeapons(float damage, float level, string name, float mana);
    ~MagicWeapons() =  default; 
    float normalAttack()override;  
    float getDamage()override ; 
    float getLevel() override ; 
    string getName()override  ; 
    float getManaConsume(); 
    virtual void showInfo() =0;
};

