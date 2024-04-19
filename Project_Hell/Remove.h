#pragma once
#include "Object_Hell.h"

class Remove: public Object_Hell
{
private:

	int RemoveVar;
	bool RemoveSupp;
public:

	void RemovObj(); // Initialise l'objet 
	void setTimeRemove(); // Nombre de tour avant l'activation de l'objet
	int getTimeRemove(); // Affiche le nombre de tour restant
	void CooldownRemove(); // Active le cooldown du nombre de tour
	void setRemove( bool d = false); // Initialise le bool�en, valeur de d�part a false
	bool getRemove(); // Bool�en qui va activer le remove si True
	
};

