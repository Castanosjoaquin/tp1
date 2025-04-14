#include "Necromancer.h"

Necromancer::Necromancer(string name, float hp, float strength ,float defense, float vampirism)
    :Wizard(name,hp,strength ,defense), vampirism{vampirism}{ 
        if(vampirism<0 || vampirism>100) throw invalid_argument("Vampirisim argument must be bewteen 0 and 100"); 
    }

void Necromancer::lifeSteal(shared_ptr<Character> enemy, int weapon ){ 
    if(weapon< 0 || weapon>2 || enemy ==nullptr) throw invalid_argument("invalid argument");
    enemy->takeDamage((getStrength(weapon)*vampirism)/100); 
    hp+=getStrength(weapon)*vampirism/100; 
}
void Necromancer::showInfo(){ 
    cout<<"Name: "<<name<<endl; 
    cout<<"Hp: "<<hp<<endl; 
    cout<<"Strength: "<<strength<<endl; 
    cout<<"Defense: "<<defense<<endl; 
    cout<<"Vampirism: " <<vampirism<<endl; 
}