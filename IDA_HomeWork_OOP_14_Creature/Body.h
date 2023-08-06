#pragma once
#include "BodyPart.h"


class Body :virtual public BodyPart
{
protected:
	float _bodysize; // cm
	
public:
	// Constructors // Initialisation // Destructors // Memory Clean -------
	Body(float density,
		BodyPartSize size,
		BodyColor color,
		HairDensity hair,
		float bodysize)
		: BodyPart(density, size, color, hair),
		_bodysize(bodysize)	
	{	}		
	// Shows ---------------------------------------------------------------
	 //float size() override	{return _bodysize;}
	float size() { return _bodysize; }

};
