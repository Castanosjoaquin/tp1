#pragma once
#include <iostream>
using namespace  std;

class Weapons
{

public:
    ~Weapons()= default;
    virtual float normalAttack()=0; 
    virtual float getDamage()=0; 
    virtual string getName()=0;
    virtual float getLevel()=0;

};    




