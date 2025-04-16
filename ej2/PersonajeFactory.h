#pragma once
#include "../ej1/weapons/combatWeapons/Club.h"
#include "../ej1/weapons/combatWeapons/CombatWeapons.h"
#include "../ej1/weapons/combatWeapons/DoubleAxe.h"
#include "../ej1/weapons/combatWeapons/SimpleAxe.h"
#include "../ej1/weapons/combatWeapons/Spear.h"
#include "../ej1/weapons/combatWeapons/Sword.h"

#include "../ej1/weapons/magicWeapons/MagicWeapons.h"
#include "../ej1/weapons/magicWeapons/MagicStaff.h"
#include "../ej1/weapons/magicWeapons/MagicBook.h"
#include "../ej1/weapons/magicWeapons/Amulet.h"
#include "../ej1/weapons/magicWeapons/Potion.h"

#include "../ej1/character/Character.h" 

#include "../ej1/character/wizard/Conjurer.h"
#include "../ej1/character/wizard/Necromancer.h"
#include "../ej1/character/wizard/Sorcerer.h"
#include "../ej1/character/wizard/Witcher.h"
#include "../ej1/character/wizard/Wizard.h"

#include "../ej1/character/warrior/Warrior.h" 
#include "../ej1/character/warrior/Paladin.h"
#include "../ej1/character/warrior/Mercenary.h"
#include "../ej1/character/warrior/Knight.h"
#include "../ej1/character/warrior/Gladiator.h"
#include "../ej1/character/warrior/Barbarian.h" 



enum weapons{club=1 , doubleAxe, simpleAxe, spear, sword, magicStaff, magicBook,amulet, potion}; 
enum character{paladin=1, mercenary, knight, gladiator, barbarian, conjurer,necromancer,sorcerer,witcher}; 

class PersonajeFactory{
    public:
    static shared_ptr<Character> creeatCharacter(character type); 
    static unique_ptr<Weapons> creatWeapon(weapons weapon); 
    static shared_ptr<Character> creeatOneArmCharacter(character character, weapons weapon); 
    static shared_ptr<Character> creeatFullCharacter(character character, weapons weapon1, weapons weapon2); 

};

