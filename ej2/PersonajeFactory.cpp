#include "PersonajeFactory.h"

shared_ptr<Character> PersonajeFactory::creeatCharacter(character character){  
    switch (character){
    case character::Paladin: 
        break;
    
    case character::Mercenary: 
        break;
    
    case character::Knight: 
        break;
    
    case character::Gladiator: 
        break;
    
    case character::Barbarian: 
        break;
    
    case character::Conjurer: 
        break;
    
    case character::Necromancer: 
        break;
    
    
    case character::Sorcerer: 
        break;
    
    case character::Witcher: 
        break;
    
    default:
        break;
    }         
}