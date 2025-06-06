#pragma once
#include "../Character.h"

class Wizard: public Character{
protected:
    string name; 
    float hp; 
    float strength; 
    float defense;
    pair<unique_ptr<Weapons>,unique_ptr<Weapons>> weapons= {nullptr,nullptr};
public:
    Wizard(string name, float hp, float strength ,float defense);
    ~Wizard() = default;
    string getName()override; 
    float getDefense()override;
    float getHp()override; 
    float getStrength(float weapon)override;
    bool isAlive() override; 
    void addPrincipalWeapon(unique_ptr<Weapons> weapon) override; 
    void deletePrincipalWeapon()override; 
    void addSecundaryWeapon(unique_ptr<Weapons> weapon)override; 
    void deleteSecundaryWeapon()override; 
    void takeDamage(float damage)override; 
    void normalAttack(shared_ptr<Character> enemy,int weapon) override; 
    virtual void showInfo() =0; 
    string getPrincipalWeapon()override;
    string getSecundaryWeapon()override;
    void takeDamageEj3(int damage) override;
};

