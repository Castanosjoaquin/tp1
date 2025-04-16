#include "Warrior.h"

Warrior::Warrior(string name, float hp, float strength ,float defense)
    :name{name}, hp{hp}, strength{strength}, defense{defense}{
        if(hp<0 || strength<0 || defense<0) throw invalid_argument("All float arguments must be positve o equal to 0"); 
   }


string Warrior:: getName(){ 
    return name;
}

float Warrior:: getStrength(float weapon){
    if(weapon>2) throw invalid_argument("Not a valid argument");
    else if ( weapon =1){
        return strength + weapons.first->getDamage();
    }
    else if( weapon =2 ){ 
        return  strength + weapons.second->getDamage();
    }
    return strength;
}

float Warrior::getDefense(){ 
    return  defense; 
}

float Warrior::getHp(){
    return hp;
}

bool Warrior::isAlive(){ 
    return hp>0; 
}

void Warrior::addPrincipalWeapon(unique_ptr<Weapons> weapon){ 
    if(weapon == nullptr){ 
        cout<<"You not pass correct weapon"<<endl; 
        return; 
    }   
    if(weapons.first != nullptr){ 
        cout<<name<<"has already a principal weapon"<<endl;
        return;
    }
    weapons.first = move(weapon); 
}

void Warrior::addSecundaryWeapon(unique_ptr<Weapons> weapon){ 
    if(weapon == nullptr){ 
        cout<<"You not pass correct weapon"<<endl; 
        return; 
    }
    else if(weapons.second != nullptr){ 
        cout<<name<<"has already a secundary weapon"<<endl;
        return;
    }
    weapons.second = move(weapon); 
}

void Warrior::deletePrincipalWeapon(){ 
    weapons.first = nullptr; 
} 

void Warrior::deleteSecundaryWeapon(){ 
    weapons.second = nullptr; 
}

void Warrior::takeDamage(float damage){ 
    hp-=damage-defense; 
    if(hp<0){ 
        cout<<name<< " died"<<endl; 
    }

}

void Warrior::normalAttack(shared_ptr<Character> enemy,int weapon){ 
    if(weapon< 0 || weapon>2 || enemy ==nullptr) throw invalid_argument("invalid argument");
    enemy->takeDamage(getStrength(weapon)); 
}

void Warrior::takeDamageEj3(int damage){ 
    hp-=damage; 
    if(hp<=0){ 
        cout<<name<< " died"<<endl; 
    }
}

string Warrior::getPrincipalWeapon(){ 
    if(weapons.first == nullptr) return "No principal weapon"; 
    return weapons.first->getName(); 
}

string Warrior::getSecundaryWeapon(){ 
    if(weapons.second == nullptr) return "No secundary weapon"; 
    return weapons.second->getName(); 
}