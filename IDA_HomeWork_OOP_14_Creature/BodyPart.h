#pragma once
#include <iostream>

enum class BodyColor {white, yellow, black, milkedcoffee, red, _end_of_list_};
enum class HairDensity {bold, few, average, high, massive, _end_of_list_};
enum class BodyPartSize {smalll, middle, llong, _end_of_list_};

class BodyPart
{
protected:
	float _weight; //kilogramms
	BodyPartSize _size;
	BodyColor _color;
	HairDensity _hair;

public:
	// Constructors // Initialisation // Destructors // Memory Clean -------

	BodyPart() = delete; // чтобы не было возможности создавать пустые экземпляры
	BodyPart(float weight,
	BodyPartSize size,
	BodyColor color,
	HairDensity hair):
		_weight(weight),
		_size(size),
		_color(color),
		_hair(hair)
	{	}

	virtual ~BodyPart() = default;

	// Shows ---------------------------------------------------------------

	//virtual float size()		{ return _weight; }
	float size() { return _weight; }
	//virtual float size() const	{ return _weight; }

};

