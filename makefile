run-1: 
	g++ ej1/weapons/magicWeapons/*.cpp  ej1/weapons/combatWeapons/*.cpp ej1/character/warrior/*.cpp ej1/character/wizard/*.cpp ej1/main.cpp -W -o ej1c
	./ej1c
run-2: 
	g++ ej1/weapons/magicWeapons/*.cpp  ej1/weapons/combatWeapons/*.cpp ej1/character/warrior/*.cpp ej1/character/wizard/*.cpp ej2/PersonajeFactory.cpp ej2/func2.cpp ej2/main.cpp -W -o ej2c
	./ej2c
run-3:
	g++ ej1/weapons/magicWeapons/*.cpp  ej1/weapons/combatWeapons/*.cpp ej1/character/warrior/*.cpp ej1/character/wizard/*.cpp ej2/PersonajeFactory.cpp ej2/func2.cpp ej3/func3.cpp ej3/main.cpp -W -o ej3c
	./ej3c