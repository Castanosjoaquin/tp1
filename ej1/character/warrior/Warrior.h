#pragma once
#include "../Character.h"

class Warrior: public Character{
protected: 
    string name; 
    float hp; 
    float strength; 
    float defense;
    pair<unique_ptr<Weapons>,unique_ptr<Weapons>> weapons= {nullptr,nullptr};
public:
    Warrior(string name, float hp, float strength ,float defense);
    ~Warrior() = default;
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
    void takeDamageEj3(int damage)override;
    string getPrincipalWeapon()override;
    string getSecundaryWeapon()override;
};



