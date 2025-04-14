#include "func2.h"

int randomNumber(int min, int max){ 
    return min + rand() % (max - min + 1);
}

shared_ptr<Character> randomCharacter(int numbWeapons){ 
    character charac = static_cast<character>(rand()%witcher);  //  cambair ah=ora ,explicar en el informe
    weapons weapon = static_cast<weapons>(rand()%potion); 
    switch (numbWeapons)
    {
    case 0:
        return PersonajeFactory::creeatCharacter(charac) ;
    case 1:
        return PersonajeFactory::creeatOneArmCharacter(charac, weapon); 
    case 3:
        weapons weapon2 = static_cast<weapons>(rand()%potion); 
        return PersonajeFactory::creeatFullCharacter(charac, weapon, weapon2); 
    
    default:
        cout<<"Invalid amount of weapons"; 
        break;
    }

}

shared_ptr<Character> randomWizard(int numbWeapons){ 
    int min = conjurer;
    int max = witcher;  
    int randomIndex = min + (std::rand() % (max - min + 1)); // incluye ambos extremos

    character charac = static_cast<character>(randomIndex);  //  cambair ah=ora ,explicar en el informe
    weapons weapon = static_cast<weapons>(rand()%potion); 
    switch (numbWeapons)
    {
    case 0:
        return PersonajeFactory::creeatCharacter(charac) ;
    case 1:
        return PersonajeFactory::creeatOneArmCharacter(charac, weapon); 
    case 3:
        weapons weapon2 = static_cast<weapons>(rand()%potion); 
        return PersonajeFactory::creeatFullCharacter(charac, weapon, weapon2); 
    
    default:
        cout<<"Invalid amount of weapons"; 
        break;
    }

}

shared_ptr<Character> randomWarrior(int numbWeapons){ 
    int min = paladin;
    int max = barbarian;
    int randomIndex = min + (std::rand() % (max - min + 1)); 
    character charac = static_cast<character>(randomIndex); 
    weapons weapon = static_cast<weapons>(rand()%potion); 
    switch (numbWeapons)
    {
    case 0:
        return PersonajeFactory::creeatCharacter(charac) ;
    case 1:
        return PersonajeFactory::creeatOneArmCharacter(charac, weapon); 
    case 3:
        weapons weapon2 = static_cast<weapons>(rand()%potion); 
        return PersonajeFactory::creeatFullCharacter(charac, weapon, weapon2); 
    
    default:
        cout<<"Invalid amount of weapons"; 
        break;
    }

}