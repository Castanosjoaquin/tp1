#include "Potion.h"

Potion::Potion(float damage, float level, string name, float mana, float healingPower)
    :MagicWeapons(damage, level, name, mana), healingPower{healingPower}{
        if(healingPower<= 0) throw invalid_argument("The healing argument must be postive");
    }

Potion::~Potion(){ }

void Potion::heal(){ 
    cout<<"The posion transform his damage floato healing power, healing"<< getDamage()/healingPower<< "Hp, consuiming "<<getManaConsume()<< "mana"<<endl;
}


void Potion::showInfo(){ 
    cout<<"Damage: "<< damage<<endl;
    cout<<"Level: "<< level<<endl; 
    cout<<"Name: "<< name<<endl; 
    cout<<"ManaConsume "<< manaConsume<<endl; 
    cout<<"Healing power"<< healingPower<<endl; 
}