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
    //testing de clases
    //creo los personajes
    shared_ptr<Paladin> paladin = make_shared<Paladin>("Paladin", 100.0, 100.0, 50.0, 50.0);
    shared_ptr<Mercenary> mercenary = make_shared<Mercenary>("Mercenary", 100.0, 100.0, 20.0, 0.5);
    shared_ptr<Knight> knight = make_shared<Knight>("Knight", 100.0, 80.0, 70.0);
    shared_ptr<Gladiator> gladiator = make_shared<Gladiator>("Gladiator", 100.0, 90.0, 60.0);
    shared_ptr<Barbarian> barbarian = make_shared<Barbarian>("Barbarian", 100.0, 110.0, 40.0);
    shared_ptr<Conjurer> conjurer = make_shared<Conjurer>("Conjurer", 100.0, 80.0, 30.0);
    shared_ptr<Necromancer> necromancer = make_shared<Necromancer>("Necromancer", 100.0, 70.0, 20.0, 40.0);
    shared_ptr<Sorcerer> sorcerer = make_shared<Sorcerer>("Sorcerer", 100.0, 90.0, 25.0, 40.0);
    shared_ptr<Witcher> witcher = make_shared<Witcher>("Witcher", 100.0, 100.0, 30.0, 50.0);

    // creo las armas
    unique_ptr<Club> club = make_unique<Club>(100.0, 5.0, 0.7, "Club", 30.0); 
    unique_ptr<DoubleAxe> doubleAxe = make_unique<DoubleAxe>(100.0, 5.0, 0.7, "DoubleAxe");
    unique_ptr<SimpleAxe> simpleAxe = make_unique<SimpleAxe>(150.0, 5.0, 0.7, "SimpleAxe", 25.0);
    unique_ptr<Spear> spear = make_unique<Spear>(30.0, 5.0, 0.7, "Spear", 15.0);               
    unique_ptr<Sword> sword = make_unique<Sword>(80.0, 5.0, 0.7, "Sword");
    unique_ptr<MagicStaff> magicStaff = make_unique<MagicStaff>(100.0, 5.0, "MagicStaff", 50.0, 500.0);
    unique_ptr<MagicBook> magicBook = make_unique<MagicBook>(50.0, 5.0, "MagicBook", 40.0, 80.0);
    unique_ptr<Amulet> amulet = make_unique<Amulet>(100.0, 5.0, "Amulet", 30.0, 150.0);
    unique_ptr<Potion> potion = make_unique<Potion>(50.0, 5.0, "Potion", 20.0, 150.0);


// añado las armas a los personajes
    witcher->addPrincipalWeapon(move(magicStaff));
    paladin->addPrincipalWeapon(move(sword));
    mercenary->addPrincipalWeapon(move(doubleAxe));
    knight->addPrincipalWeapon(move(spear));
    gladiator->addPrincipalWeapon(move(simpleAxe));
    barbarian->addPrincipalWeapon(move(club));
    conjurer->addPrincipalWeapon(move(magicBook));
    necromancer->addPrincipalWeapon(move(amulet));
    sorcerer->addPrincipalWeapon(move(potion));

    // muestro la info de los personajes
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