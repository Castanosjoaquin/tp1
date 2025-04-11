#pragma once
#include "../Character.h"

class Wizard: public Character{
protected:
    string name; 
    float hp; 
    float strength; 
    float defense;
    pair<shared_ptr<Weapons>,shared_ptr<Weapons>> weapons= {nullptr,nullptr};
public:
    Wizard(string name, float hp, float strength ,float defense);
    ~Wizard() = default;
    string getName()override; 
    float getDefense()override;
    float getHp()override; 
    float getStrength(float weapon)override;
    bool isAlive() override; 
    void addPrincipalWeapon(shared_ptr<Weapons> weapon) override; 
    void deletePrincipalWeapon()override; 
    void addSecundaryWeapon(shared_ptr<Weapons> weapon)override; 
    void deleteSecundaryWeapon()override; 
    void takeDamage(float damage)override; 
    void normalAttack(shared_ptr<Character> enemy,int weapon) override; 

};

