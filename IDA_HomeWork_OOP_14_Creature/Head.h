﻿#pragma once
#include "BodyPart.h"


class Head :virtual public BodyPart
{
protected:
	float _headsize; // cm
	size_t _eyes_amount;
	/*Head(float headsize,
		size_t eyes_amount)
		:_headsize(headsize),
		_eyes_amount(eyes_amount) {	}*/

public:
	// Constructors // Initialisation // Destructors // Memory Clean -------
	
	//Head() = default;
	Head(float density,
		BodyPartSize size,
		BodyColor color,
		HairDensity hair,
		float headsize,
		size_t eyes_amount) 
		: BodyPart(density, size, color,hair),
		_headsize(headsize),
		_eyes_amount(eyes_amount)
	{	}

	// Shows ---------------------------------------------------------------
	//float size() override { return _headsize; }
	float size() { return _headsize; }

};
