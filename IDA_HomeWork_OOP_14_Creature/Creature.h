#pragma once
#include "Head.h"
#include "Body.h"
#include "Arms.h"
#include "Legs.h"

enum class Character_type {warrior, magican, trader, sailor, terminator};
enum class Character_race { human, elf, orc, dwarf, terminator};

class Creature : public Head, public Body, public Arms, public Legs
{
protected:
	std::string _name; 
	Character_type _type;
	Character_race _race;

public:
	// Constructors // Initialisation // Destructors // Memory Clean -------
	Creature(float weight,
		BodyPartSize size,
		BodyColor color,
		HairDensity hair,
		float armslength,
		float legslength,
		float bodysize,
		float headsize,
		size_t eyes_amount,
		std::string name,
		Character_type type,
		Character_race race)

		// Как избежать дублирования кода вызова конструкторов и при этом не позволять создавать пустые объекты?
		: BodyPart(weight, size, color, hair),
		Head(weight, size, color, hair, headsize, eyes_amount),
		Body(weight, size, color, hair, bodysize),
		Arms(weight, size, color, hair, armslength),
		Legs(weight, size, color, hair, legslength),
		_name(name),
		_type(type),
		_race(race)
		{	}
	// Shows ---------------------------------------------------------------

};
