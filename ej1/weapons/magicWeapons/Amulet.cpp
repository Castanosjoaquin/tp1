#include "Amulet.h"

Amulet::Amulet(float damage, float level, string name, float mana,float protectionPower )
    :MagicWeapons( damage, level,name,mana), protectionPower{protectionPower}{
        if(protectionPower<=0)throw invalid_argument("The protectionPower argument must be postive");
    }


void Amulet::magicProtection(float injury ) { 
    if (injury > getDamage()) {
        cout<< "The amulet blocked " << getDamage() << " damage and you received " << (injury - getDamage()) << " damage, and consume "<< getManaConsume()<< "mana"<<endl;
    } else {
        cout<< "The amulet blocked all the damage: " << injury <<"and consume "<< getManaConsume()<< "mana"<<endl;
    }
}

void Amulet::showInfo(){ 
    cout<<"Damage: "<< damage<<endl;
    cout<<"Level: "<< level<<endl; 
    cout<<"Name: "<< name<<endl; 
    cout<<"Mana Consume "<< manaConsume<<endl; 
    cout<<"Protection  power"<< protectionPower<<endl; 
}