#pragma once
#include "BodyPart.h"


class Arms :virtual public BodyPart
{
protected:
	float _length; // cm

public:
	// Constructors // Initialisation // Destructors // Memory Clean -------
	Arms (float weight,
		BodyPartSize size,
		BodyColor color,
		HairDensity hair,
		float length)
		: BodyPart(weight, size, color, hair),
		_length(length)
	{	}
	// Shows ---------------------------------------------------------------
	//float size() override { return _length; }
	float size() { return _length; }

};
