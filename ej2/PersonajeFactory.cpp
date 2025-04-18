#include "PersonajeFactory.h"

shared_ptr<Character> PersonajeFactory::creeatCharacter(character type){  

    switch (type){
        case character::paladin:
            return make_shared<Paladin>("Paladin", 100.0, 100.0,50.0,50.0);
        case character::mercenary: 
            return make_shared<Mercenary>("Mercernary", 100.0, 100.0,20.0,0.5);
        case character::knight:
            return  make_shared<Knight>("Knight", 100.0,80.0,70.0);
        case character::gladiator:
            return make_shared<Gladiator>("Gladiator", 100.0, 90.0, 60.0);
        case character::barbarian:
            return make_shared<Barbarian>("Barbarian", 100.0, 110.0, 40.0);
        case character::conjurer:
            return make_shared<Conjurer>("Conjurer", 100.0, 80.0, 30.0);
           
        case character::necromancer: 
            return make_shared<Necromancer>("Necromancer", 100.0, 70.0, 20.0, 40.0);
        case character::sorcerer:
            return make_shared<Sorcerer>("Sorcerer", 100.0, 90.0, 25.0, 40.0);
        case character::witcher:
            return make_shared<Witcher>("Witcher", 100.0, 100.0, 30.0,50.0);
        
        default:
            throw invalid_argument("Invalid character type");
            return nullptr;
    
    }         
}

unique_ptr<Weapons> PersonajeFactory::creatWeapon(weapons weapon){  
        switch (weapon){    
        case weapons::club:

            return make_unique<Club>(100.0,5.0,0.7,"Club",30.0); 

        case weapons::doubleAxe:
            return make_unique<DoubleAxe>(100.0,5.0,0.7,"DoubleAxe");

        case weapons::simpleAxe:
            return make_unique<SimpleAxe>(150.0,5.0,0.7,"SimpleAxe", 25.0);
        
        case weapons::spear:
            return make_unique<Spear>(30.0,5.0,0.7,"Spear", 15.0);               

        case weapons::sword:
            return make_unique<Sword>(80.0,5.0,0.7,"Sword");
        case weapons::magicStaff:
            return make_unique<MagicStaff>(100.0,5.0,"MagicStaff", 50.0,500.0);
        
        case weapons::magicBook:
            return make_unique<MagicBook>(50.0,5.0,"MagicBook", 40.0, 80.0);
    
        case weapons::amulet:
            return make_unique<Amulet>(100.0,5.0,"Amulet", 30.0, 150.0);

        case weapons::potion:
            return  make_unique<Potion>(50.0,5.0,"Potion", 20.0,150.0);

        default:
            throw invalid_argument("Invalid weapon type");

        }
    }

shared_ptr<Character> PersonajeFactory::creeatOneArmCharacter(character character, weapons weapon){
    shared_ptr<Character> newCharacter = creeatCharacter(character);
    unique_ptr<Weapons> newWeapon = creatWeapon(weapon);
    newCharacter->addPrincipalWeapon(move(newWeapon));
    return newCharacter;
}

shared_ptr<Character> PersonajeFactory::creeatFullCharacter(character character,weapons weapon1, weapons weapon2){
    shared_ptr<Character> newCharacter = creeatCharacter(character);
    unique_ptr<Weapons> newWeapon1 = creatWeapon(weapon1);
    unique_ptr<Weapons> newWeapon2 = creatWeapon(weapon2);
    newCharacter->addPrincipalWeapon(move(newWeapon1));
    newCharacter->addSecundaryWeapon(move(newWeapon2));
    return newCharacter;
}