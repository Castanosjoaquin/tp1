#include "weapons/Weapons.h"

#include "weapons/combatWeapons/Club.h"
#include "weapons/combatWeapons/CombatWeapons.h"
#include "weapons/combatWeapons/DoubleAxe.h"
#include "weapons/combatWeapons/SimpleAxe.h"
#include "weapons/combatWeapons/Spear.h"
#include "weapons/combatWeapons/Sword.h"

#include "weapons/magicWeapons/MagicWeapons.h"
#include "weapons/magicWeapons/MagicStaff.h"
#include "weapons/magicWeapons/MagicBook.h"
#include "weapons/magicWeapons/Amulet.h"
#include "weapons/magicWeapons/Potion.h"

#include "character/Character.h" 

#include "character/wizard/Conjurer.h"
#include "character/wizard/Necromancer.h"
#include "character/wizard/Sorcerer.h"
#include "character/wizard/Witcher.h"
#include "character/wizard/Wizard.h"

#include "character/warrior/Warrior.h" 
#include "character/warrior/Paladin.h"
#include "character/warrior/Mercenary.h"
#include "character/warrior/Knight.h"
#include "character/warrior/Gladiator.h"
#include "character/warrior/Barbarian.h" 



enum weapons{club, doubleAxe, simpleAxe, spear, sword, magicStaff, magicBook,amulet, potion}; 
enum character{paladin, mercenary, knight, gladiator, barbarian, conjurer,necromancer,sorcerer,witcher}; 

class PersonajeFactory{
    public:
    static shared_ptr<Character> creeatCharacter(character type); 
    static shared_ptr<Weapons> creatWeapon(weapons weapon); 
    static shared_ptr<Character> creeatOneArmCharacter(character character, weapons weapon); 
    static shared_ptr<Character> creeatFullCharacter(character character, weapons weapon1, weapons weapon2); 

};

