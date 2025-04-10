#include "MagicStaff.h"

MagicStaff:: MagicStaff(float damage, float level, string name, float mana, float age)
    :MagicWeapons(damage,level,name,mana), age{age}{
        if(age<=0) throw invalid_argument("The age must be postive");
    }

MagicStaff::~MagicStaff(){ }

void MagicStaff::ancientAttack(){ 
cout<<"The magic staff of "<< age<<"years old make "<< normalAttack()*(age/10)<<"and consume "<< getManaConsume()<< "of mana"<<endl; 
}
