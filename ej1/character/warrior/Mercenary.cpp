#include "Mercenary.h"

Mercenary::Mercenary(string name, float hp, float strength, float defense,float luck)
    :Warrior(name,hp,strength,defense), luck{luck}{   
    if(luck<0||luck>0.7) throw invalid_argument("The luck must be positive and lower than 0.7"); 
    }

void Mercenary::takeDamage(float damage){ 
    std::srand(time(0));
    float random_number = static_cast<float>(std::rand()) / RAND_MAX;

    if(random_number <=luck){ 
        cout<<getName() <<"dodge the attack "<<endl; 
        return; 
    }
    hp-= damage-defense; 
    if(hp<0){ 
        cout<<name<< " died"<<endl; 
    }
}
