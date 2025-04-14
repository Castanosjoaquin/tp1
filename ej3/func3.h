#pragma once
#include "../ej2/PersonajeFactory.h"
#include "../ej2/func2.h"

using namespace std; 
enum attacks{strongHit = 1,quickHit, defendAndHit};	

int chooseCharacter(); 
int chooseWeapon(); 
shared_ptr<Character> createCharacter();
weapons createWeapon(); 
int selectAttack();
attacks selectAttackType(int attack); 
void interaction(shared_ptr<Character> player, shared_ptr<Character> enemy);