#include "PersonajeFactory.h"
#include <time.h>
#include <cstdlib>
#include <vector>

int randomNumber(int min, int max);  

shared_ptr<Character> randomCharacter(int numbWeapons); 
shared_ptr<Character> randomWizard(int numbWeapons);
shared_ptr<Character> randomWarrior(int numbWeapons);