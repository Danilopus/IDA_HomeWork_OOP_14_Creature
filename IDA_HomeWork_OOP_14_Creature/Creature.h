#pragma once
#include "Head.h"
#include "Body.h"
#include "Arms.h"
#include "Legs.h"

class Creature : public Head, public Body, public Arms, public Legs
{
protected:
	float _length; // cm

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
		size_t eyes_amount)

		: BodyPart(weight, size, color, hair)
		
		
		//Head::_headsize(headsize),

		//Head(headsize, eyes_amount),
		//Body
	{ _headsize = headsize; }
	// Shows ---------------------------------------------------------------

};
