#include "func3.h"

int main(){ 
    shared_ptr<Character> player = createCharacter();  
    shared_ptr<Character> enemy = randomCharacter(1);
    srand(time(0)); // iniciaza la seed para la generacion de numero aleatorio
    while (player->getHp() > 0 && enemy->getHp() > 0) {
        cout<<"The player has "<<player->getHp()<< "hp and the enemy has "<<enemy->getHp()<< "hp"<<endl; 
        interaction(player, enemy);
    } 
} 

  