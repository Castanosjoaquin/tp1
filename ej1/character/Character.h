#pragma once
#include <iostream>
#include "../weapons/Weapons.h"
#include <memory>
using namespace std; 

class Character{
private:

public:
    ~Character() = default;
    virtual string getName()=0 ; 
    virtual float getDefense()=0;
    virtual float getHp()=0; 
    virtual float getStrength(float weapon) =0;
    virtual bool isAlive() =0; 
    virtual void addPrincipalWeapon(shared_ptr<Weapons> weapon) =0; 
    virtual void deletePrincipalWeapon()=0; 
    virtual void addSecundaryWeapon(shared_ptr<Weapons> weapon)=0; 
    virtual void deleteSecundaryWeapon()=0 ;
    virtual void takeDamage(float damage)=0;
    virtual void takeDamageEj3(int damage)=0;
    virtual string getPrincipalWeapon()=0;
    virtual string getSecundaryWeapon()=0;
    virtual void normalAttack(shared_ptr<Character> enemy, int weapon)=0;
};

