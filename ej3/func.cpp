#include "main.h"
#include <iostream>


int chooseCharacter(){ 
    int character; 
    cout << "Choose a character: " << endl; 
    cout << "1. Paladin" << endl; 
    cout << "2. Mercenary" << endl; 
    cout << "3. Knight" << endl; 
    cout << "4. Gladiator" << endl; 
    cout << "5. Barbarian" << endl; 
    cout << "6. Conjurer" << endl; 
    cout << "7. Necromancer" << endl; 
    cout << "8. Sorcerer" << endl; 
    cout << "9. Witcher" << endl; 
    cin >> character; 
    return character;
}

int chooseWeapon(){ 
    int weapon; 
    cout << "Choose a weapon: " << endl; 
    cout << "1. Club" << endl; 
    cout << "2. Double Axe" << endl; 
    cout << "3. Simple Axe" << endl; 
    cout << "4. Spear" << endl; 
    cout << "5. Sword" << endl; 
    cout << "6. Magic Staff" << endl; 
    cout << "7. Magic Book" << endl; 
    cout << "8. Amulet" << endl; 
    cout << "9. Potion" << endl; 
    cin >> weapon; 
    return weapon;
}

shared_ptr<Character> createCharacter(){ 
    int charac = chooseCharacter();
    while(true){
    switch (charac) {
    case character::paladin:
        return PersonajeFactory::creeatOneArmCharacter(character::paladin, createWeapon());
    case character::mercenary:  
        return PersonajeFactory::creeatOneArmCharacter(character::mercenary, createWeapon());
    case character::knight: 
        return PersonajeFactory::creeatOneArmCharacter(character::knight, createWeapon());
    case character::gladiator:  
        return PersonajeFactory::creeatOneArmCharacter(character::gladiator, createWeapon());
    case character::barbarian:  
        return PersonajeFactory::creeatOneArmCharacter(character::barbarian, createWeapon());
    case character::conjurer:   
        return PersonajeFactory::creeatOneArmCharacter(character::conjurer, createWeapon());
    case character::necromancer:    
        return PersonajeFactory::creeatOneArmCharacter(character::necromancer, createWeapon());
    case character::sorcerer:   
        return PersonajeFactory::creeatOneArmCharacter(character::sorcerer, createWeapon());
    case character::witcher:    
        return PersonajeFactory::creeatOneArmCharacter(character::witcher, createWeapon());
    default:
        cout << "Invalid weapon. Please choose again." << endl;
        charac = chooseCharacter();
        break;
    }
}}


weapons createWeapon(){ 
    int weapon = chooseWeapon();
   while (true){ 
    switch (weapon) {
    case weapons::club:
        return weapons::club;
    case weapons::doubleAxe:
        return weapons::doubleAxe;
    case weapons::simpleAxe:
        return weapons::simpleAxe;
    case weapons::spear:
        return weapons::spear;
    case weapons::sword:    
        return weapons::sword;
    case weapons::magicStaff:
        return weapons::magicStaff;
    case weapons::magicBook:    
        return weapons::magicBook;
    case weapons::amulet:   
        return weapons::amulet;     
    case weapons::potion:   
        return weapons::potion;  
    default:
        cout << "Invalid weapon. Please choose again." << endl;\
        weapon = chooseWeapon();
        break;
    }
}}

int selectAttack(){ 
    int attack; 
    cout << "Choose an attack: " << endl; 
    cout << "1. Strong hit" << endl; 
    cout << "2. Quick hit" << endl; 
    cout << "3. Defend and hit" << endl; 
    cin >> attack; 
    return attack;
}

attacks selectAttackType(int attack){ //esta funcion es para que sea mas legible
   while(true){
        switch (attack) {
        case strongHit:
            return strongHit;
        case quickHit:
            return quickHit;
        case defendAndHit:
            return defendAndHit;
        default:
            cout << "Invalid attack, Please choose again." << endl;
            attack = selectAttack();
            break;
    }}
}   

void interaction(shared_ptr<Character> player, shared_ptr<Character> enemy){
    attacks playerAttack =  selectAttackType(selectAttack());
    attacks enemyAttack = selectAttackType(randomNumber(1, 3));
    if(playerAttack == enemyAttack) cout << "Both players used the same hit" << endl;
    else if (playerAttack == strongHit && enemyAttack == quickHit || 
             playerAttack == quickHit && enemyAttack == defendAndHit || 
             playerAttack == defendAndHit && enemyAttack == strongHit) {
       enemy->takeDamageEj3(10);
       cout<<"The "<<player->getName() << " use <<"<<player->getPrincipalWeapon() <<" making 10 points of damage" << endl;
       if(enemy->isAlive() == false) {
            cout << player->getName() << " has won" << endl;
   
        }}  
    else{
        player->takeDamageEj3(10);
        cout<<"The "<< enemy->getName()  << " use <<"<<enemy->getPrincipalWeapon() <<" making 10 points of damage" << endl;
        if(player->isAlive() == false) {
            cout << enemy->getName() << " has won" << endl;}
}}

