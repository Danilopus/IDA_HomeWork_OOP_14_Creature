#pragma once
#include "Head.h"
#include "Body.h"
#include "Arms.h"
#include "Legs.h"

enum class Character_type {warrior, magican, trader, sailor, _end_of_list_};
enum class Character_race { human, elf, orc, dwarf, _end_of_list_};

class Creature: public Head, public Body, public Arms, public Legs
{
protected:
	std::string _name; 
	Character_type _type;
	Character_race _race;

public:
	// Constructors // Initialisation // Destructors // Memory Clean -------
	Creature(float density,
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
		: BodyPart(density, size, color, hair),
		Head(density, size, color, hair, headsize, eyes_amount),
		Body(density, size, color, hair, bodysize),
		Arms(density, size, color, hair, armslength),
		Legs(density, size, color, hair, legslength),
		_name(name),
		_type(type),
		_race(race)
		{	}
	// Shows ---------------------------------------------------------------
	//float size() override { return Head::size()+Body::size()+Arms::size()+Legs::size()+BodyPart::size(); }
	float size() { return Head::size()+Body::size()+Arms::size()+Legs::size()+BodyPart::size(); }

};
