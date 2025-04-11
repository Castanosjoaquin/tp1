#include "Knight.h"

Knight::Knight(string name, float hp, float strength ,float defense)
    :Warrior(name, hp,strength, defense),guardianAngleBar(0){}


void Knight::angleAttack(shared_ptr<Character> enemy,float weapon){ 
    if(weapon< 0 || weapon>2 || enemy ==nullptr) throw invalid_argument("invalid argument");
    enemy->takeDamage(getStrength(weapon));
    guardianAngleBar+=10; 
}

void Knight::takeDamage(float damage){ 
    hp-=damage-defense; 
    if(hp<0){ 
        if(guardianAngleBar>100){
            hp+=100; 
            cout<<name<<" has been saved by a guardian angle"<<endl; 
            guardianAngleBar =0 ;
            return;
        }
        cout<<name<< " died"<<endl; 
    }
}
