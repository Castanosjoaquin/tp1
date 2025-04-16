#include "func2.h"

int randomNumber(int min, int max){ 
    return min + rand() % (max - min + 1);
}

shared_ptr<Character> randomCharacter(int numbWeapons){ 
    int randomCharac = randomNumber(paladin, witcher);
    int randomWeapon = randomNumber(club, potion);
    character charac = static_cast<character>(randomCharac);  
    weapons weapon = static_cast<weapons>(randomWeapon);
    while(true){
        switch (numbWeapons){
        case 0:
            return PersonajeFactory::creeatCharacter(charac) ;
        case 1:
            return PersonajeFactory::creeatOneArmCharacter(charac, weapon); 
        case 2:{
            int randomWeapon2 = randomNumber(club, potion);
            weapons weapon2 = static_cast<weapons>(randomWeapon2); 
            return PersonajeFactory::creeatFullCharacter(charac, weapon, weapon2); } 
        default:
            cout<<"Invalid amount of weapons"; 
            break;
        }
        cout<<"enter a valid number of weapons"<<endl;
        cin>>numbWeapons;}

}

shared_ptr<Character> randomWizard(int numbWeapons){ 
    int randomCharac = randomNumber(conjurer, witcher);
    int randomWeapon = randomNumber(club, potion);
    character charac = static_cast<character>(randomCharac);  //explicar en el informe
    weapons weapon = static_cast<weapons>(randomWeapon); 
    while (true){
        switch (numbWeapons){
        case 0:
            return PersonajeFactory::creeatCharacter(charac) ;
        case 1:
            return PersonajeFactory::creeatOneArmCharacter(charac, weapon); 
        case 2:{
            int randomWeapon2 = randomNumber(club, potion);
            weapons weapon2 = static_cast<weapons>(randomWeapon2); 
            return PersonajeFactory::creeatFullCharacter(charac, weapon, weapon2); 
        }
        default:
            cout<<"Invalid amount of weapons"; 
            break;
    }
    cout<<"enter a valid number of weapons"<<endl;
    cin>>numbWeapons;}

}

shared_ptr<Character> randomWarrior(int numbWeapons){ 
    int randomCharac = randomNumber(paladin, barbarian); 
    int randomWeapon = randomNumber(club, potion);
    character charac = static_cast<character>(randomCharac); 
    weapons weapon = static_cast<weapons>(randomWeapon); 
    while (true){
        switch (numbWeapons) {
        case 0:
            return PersonajeFactory::creeatCharacter(charac) ;
        case 1:
            return PersonajeFactory::creeatOneArmCharacter(charac, weapon); 
        case 2:{
            int randomWeapon2 = randomNumber(club, potion);
            weapons weapon2 = static_cast<weapons>(randomWeapon2); 
            return PersonajeFactory::creeatFullCharacter(charac, weapon, weapon2); 
        }
        default:
            cout<<"Invalid amount of weapons"<<endl; 
            break;
        }
        cout<<"enter a valid number of weapons"<<endl;
        cin>>numbWeapons;
    }
}