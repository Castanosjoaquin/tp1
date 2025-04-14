#include "func2.h"
int main(){ 
    srand(time(0)); 
    int warriorNumber= randomNumber(3,7); 
    int wizardNumber = randomNumber(3,7); 
    vector<shared_ptr<Character>> players;
    int weaponNumber;
    for(int i=0; i<warriorNumber; i++){
        weaponNumber = randomNumber(0,1);
        players.push_back(randomWarrior(weaponNumber));
    }
    for(int i=0; i<wizardNumber; i++){
        weaponNumber = randomNumber(0,2);
        players.push_back(randomWizard(weaponNumber));
    }
    for(int i=0; i<players.size(); i++){
        cout<<players[i]->getName()<<endl;
        cout<<endl;
    }
}

