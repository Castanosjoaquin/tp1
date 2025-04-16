#include "Wizard.h" 

Wizard::Wizard(string name, float hp, float strength ,float defense)
    :name{name}, hp{hp}, strength{strength}, defense{defense}{ 
        if(hp<0 || strength<0 || defense<0) throw invalid_argument("All float arguments must be positve o equal to 0"); 
    }


string Wizard:: getName(){ 
    return name;
}
float Wizard:: getStrength(float weapon){
    if(weapon>2) throw invalid_argument("Not a valid argument");
    else if ( weapon =1){
        return strength + weapons.first->getDamage();
    }
    else if( weapon =2 ){ 
        return  strength + weapons.second->getDamage();
    }
    return strength;
}
float Wizard::getDefense(){ 
    return  defense; 
}

float Wizard::getHp(){
    return hp;
}

bool Wizard::isAlive(){ 
    return hp>0; 
}

void Wizard::addPrincipalWeapon(unique_ptr<Weapons> weapon){ 
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

void Wizard::addSecundaryWeapon(unique_ptr<Weapons> weapon){ 
    if(weapon == nullptr){ 
        cout<<"You not pass correct weapon"<<endl; 
        return; 
    }
    else if(weapons.second != nullptr){ 
        cout<<name<<"has already a secundary weapon"<<endl;
        return;
    }
    weapons.second = move( weapon); 
}

void Wizard::deletePrincipalWeapon(){ 
    weapons.first = nullptr; 
} 

void Wizard::deleteSecundaryWeapon(){ 
    weapons.second = nullptr; 
} 

void Wizard::takeDamage(float damage){ 
    hp-=damage-defense; 
    if(hp<0){ 
        cout<<name<< " died"<<endl; 
    }

}

void Wizard::normalAttack(shared_ptr<Character> enemy,int weapon){ 
    if(weapon< 0 || weapon>2 || enemy ==nullptr) throw invalid_argument("invalid argument");
    enemy->takeDamage(getStrength(weapon)); 
}

void Wizard::takeDamageEj3(int damage){ 
    hp-=damage; 
    if(hp<0){ 
        cout<<name<< " died"<<endl; 
    }
}

string Wizard::getPrincipalWeapon(){ 
    if(weapons.first == nullptr) return "No principal weapon"; 
    return weapons.first->getName(); 
}
string Wizard::getSecundaryWeapon(){ 
    if(weapons.second == nullptr) return "No secundary weapon"; 
    return weapons.second->getName(); 
}
