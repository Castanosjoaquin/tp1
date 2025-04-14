#pragma once 

#include "../Weapons.h"
#include <cstdlib>
#include <ctime>

class CombatWeapons : public Weapons {
protected:
    float damage; 
    float level; 
    string name; 
    float bleeding; // a float between 0 and 1

public:
    CombatWeapons(float damage, float level,float bleeding, string name = "Unknow");
    ~CombatWeapons() = default;
    float normalAttack()override;  
    float getDamage()override ; 
    float getLevel() override; 
    string getName()override; 
    void bleedingPosibility() ;
    virtual void showInfo() =0;

    
};