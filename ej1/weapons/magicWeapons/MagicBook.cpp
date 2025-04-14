#include "MagicBook.h"

MagicBook::MagicBook(float damage, float level, string name, float mana,float magicPower )
    :MagicWeapons( damage, level,name,mana), magicPower{magicPower}{
        if(magicPower<=0)  throw invalid_argument("The magicPower argument must be postive");
    }

MagicBook::~MagicBook(){ 
}

void MagicBook::magicAttack(){ 
    cout<<"The magic book make "<< normalAttack()*magicPower <<"damage and consume "<< getManaConsume()<< "mana"<<endl;
}


void MagicBook::showInfo(){ 
    cout<<"Damage: "<< damage<<endl;
    cout<<"Level: "<< level<<endl; 
    cout<<"Name: "<< name<<endl; 
    cout<<"ManaConsume "<< manaConsume<<endl; 
    cout<<"Magic power"<< magicPower<<endl; 
}