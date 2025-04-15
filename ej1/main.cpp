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

int main(){ 
    //testing the classes
    // create characters
    shared_ptr<Paladin> paladin = make_shared<Paladin>("Paladin", 100.0, 100.0, 50.0, 50.0);
    shared_ptr<Mercenary> mercenary = make_shared<Mercenary>("Mercenary", 100.0, 100.0, 20.0, 0.5);
    shared_ptr<Knight> knight = make_shared<Knight>("Knight", 100.0, 80.0, 70.0);
    shared_ptr<Gladiator> gladiator = make_shared<Gladiator>("Gladiator", 100.0, 90.0, 60.0);
    shared_ptr<Barbarian> barbarian = make_shared<Barbarian>("Barbarian", 100.0, 110.0, 40.0);
    shared_ptr<Conjurer> conjurer = make_shared<Conjurer>("Conjurer", 100.0, 80.0, 30.0);
    shared_ptr<Necromancer> necromancer = make_shared<Necromancer>("Necromancer", 100.0, 70.0, 20.0, 40.0);
    shared_ptr<Sorcerer> sorcerer = make_shared<Sorcerer>("Sorcerer", 100.0, 90.0, 25.0, 40.0);
    shared_ptr<Witcher> witcher = make_shared<Witcher>("Witcher", 100.0, 100.0, 30.0, 50.0);

    // create weapons
    shared_ptr<Club> club = make_shared<Club>(100.0, 5.0, 0.7, "Club", 30.0); 
    shared_ptr<DoubleAxe> doubleAxe = make_shared<DoubleAxe>(100.0, 5.0, 0.7, "DoubleAxe");
    shared_ptr<SimpleAxe> simpleAxe = make_shared<SimpleAxe>(150.0, 5.0, 0.7, "SimpleAxe", 25.0);
    shared_ptr<Spear> spear = make_shared<Spear>(30.0, 5.0, 0.7, "Spear", 15.0);               
    shared_ptr<Sword> sword = make_shared<Sword>(80.0, 5.0, 0.7, "Sword");
    shared_ptr<MagicStaff> magicStaff = make_shared<MagicStaff>(100.0, 5.0, "MagicStaff", 50.0, 500.0);
    shared_ptr<MagicBook> magicBook = make_shared<MagicBook>(50.0, 5.0, "MagicBook", 40.0, 80.0);
    shared_ptr<Amulet> amulet = make_shared<Amulet>(100.0, 5.0, "Amulet", 30.0, 150.0);
    shared_ptr<Potion> potion = make_shared<Potion>(50.0, 5.0, "Potion", 20.0, 150.0);


// Assign weapons to characters
    witcher->addPrincipalWeapon(magicStaff);
    paladin->addPrincipalWeapon(sword);
    mercenary->addPrincipalWeapon(doubleAxe);
    knight->addPrincipalWeapon(spear);
    gladiator->addPrincipalWeapon(simpleAxe);
    barbarian->addPrincipalWeapon(club);
    conjurer->addPrincipalWeapon(magicBook);
    necromancer->addPrincipalWeapon(amulet);
    sorcerer->addPrincipalWeapon(potion);

    // Show character info
    witcher->showInfo();
    paladin->showInfo();
    mercenary->showInfo();
    knight->showInfo();
    gladiator->showInfo();
    barbarian->showInfo();
    conjurer->showInfo();
    necromancer->showInfo();
    sorcerer->showInfo();
    
}