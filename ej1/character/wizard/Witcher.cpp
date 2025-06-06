#include "Witcher.h"

Witcher::Witcher(string name, float hp, float strength ,float defense, float magicProtection)   
    :Wizard(name, hp, strength, defense), magicProtection{magicProtection}{ 
        if( magicProtection<= 0) throw invalid_argument("Magic protection argument must be postive"); 
    }

void Witcher::takeDamage(float damage){ 
    hp-=damage-(defense*magicProtection)/100; 
    if(hp<0){ 
        cout<<name<< " died"<<endl;
}
}

void Witcher::showInfo(){ 
    cout<<"Name: "<<name<<endl; 
    cout<<"Hp: "<<hp<<endl; 
    cout<<"Strength: "<<strength<<endl; 
    cout<<"Defense: "<<defense<<endl; 
    cout<<"Magic protection: " <<magicProtection<<endl; 
}