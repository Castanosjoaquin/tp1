#include "PersonajeFactory.h"

shared_ptr<Character> PersonajeFactory::creeatCharacter(character type){  

    switch (type){
        case character::paladin:
            return make_shared<Paladin>("Paladin", 1000.0, 100.0,50.0,50.0);
        case character::mercenary: 
            return make_shared<Mercenary>("Mercernary", 500.0, 100.0,20.0,0.5);
        case character::knight:
            return  make_shared<Knight>("Knight", 1200.0,80.0,70.0);
        case character::gladiator:
            return make_shared<Gladiator>("Gladiator", 800.0, 90.0, 60.0);
        case character::barbarian:
            return make_shared<Barbarian>("Barbarian", 700.0, 110.0, 40.0);
        case character::conjurer:
            return make_shared<Conjurer>("Conjurer", 600.0, 80.0, 30.0);
           
        case character::necromancer: 
            return make_shared<Necromancer>("Necromancer", 500.0, 70.0, 20.0, 0.4);
        case character::sorcerer:
            return make_shared<Sorcerer>("Sorcerer", 550.0, 90.0, 25.0, 4.0);
        case character::witcher:
            return make_shared<Witcher>("Witcher", 700.0, 100.0, 30.0);
        
        default:
            throw invalid_argument("Invalid character type");
            return nullptr;
    
    }         
}

shared_ptr<Weapons> PersonajeFactory::creatWeapon(weapons weapon){ 
    switch (weapon){    
    case weapons::club:
        return make_shared<Club>("Club", 20.0, 0.5);
     
    case weapons::doubleAxe:
        return make_shared<DoubleAxe>("DoubleAxe", 30.0, 0.7);

    case weapons::simpleAxe:
        return make_shared<SimpleAxe>("SimpleAxe", 25.0, 0.6);
      
    case weapons::spear:
        return make_shared<Spear>("Spear", 15.0, 0.4);               

    case weapons::sword:
       return make_shared<Sword>("Sword", 35.0, 0.8);
   
    case weapons::magicStaff:
        return make_shared<MagicStaff>("MagicStaff", 50.0, 0.9);
    
    case weapons::magicBook:
        return make_shared<MagicBook>("MagicBook", 40.0, 0.8);
   
    case weapons::amulet:
        return make_shared<Amulet>("Amulet", 30.0, 0.6);

    case weapons::potion:
        return  make_shared<Potion>("Potion", 20.0, 0.5);

    default:
        throw invalid_argument("Invalid weapon type");
        return nullptr;
    }
    }

shared_ptr<Character> PersonajeFactory::creeatOneArmCharacter(character character, weapons weapon){
    shared_ptr<Character> newCharacter = creeatCharacter(character);
    shared_ptr<Weapons> newWeapon = creatWeapon(weapon);
    newCharacter->addPrincipalWeapon(newWeapon);
    return newCharacter;
}

shared_ptr<Character> PersonajeFactory::creeatFullCharacter(character character,weapons weapon1, weapons weapon2){
    shared_ptr<Character> newCharacter = creeatCharacter(character);
    shared_ptr<Weapons> newWeapon1 = creatWeapon(weapon1);
    shared_ptr<Weapons> newWeapon2 = creatWeapon(weapon2);
    newCharacter->addPrincipalWeapon(newWeapon1);
    newCharacter->addSecundaryWeapon(newWeapon2);
    return newCharacter;
}