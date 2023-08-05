#pragma once
#include "BodyPart.h"


class Body :virtual public BodyPart
{
protected:
	float _bodysize; // cm
	
public:
	// Constructors // Initialisation // Destructors // Memory Clean -------
	Body(float weight,
		BodyPartSize size,
		BodyColor color,
		HairDensity hair,
		float bodysize)
		: BodyPart(weight, size, color, hair),
		_bodysize(bodysize)	
	{	}		
	// Shows ---------------------------------------------------------------

};
