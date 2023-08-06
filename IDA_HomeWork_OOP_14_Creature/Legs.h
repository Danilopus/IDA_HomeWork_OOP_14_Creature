﻿#pragma once
#include "BodyPart.h"


class Legs :virtual public BodyPart
{
protected:
	float _length; // cm

public:
	// Constructors // Initialisation // Destructors // Memory Clean -------
	Legs(float density,
		BodyPartSize size,
		BodyColor color,
		HairDensity hair,
		float length)
		: BodyPart(density, size, color, hair),
		_length(length)
	{	}
	// Shows ---------------------------------------------------------------
	//float size() override { return _length; }
	float size() { return _length; }

};
