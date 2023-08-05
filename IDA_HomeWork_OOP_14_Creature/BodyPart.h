#pragma once
#include <iostream>

enum class BodyColor {white, yellow, black, milkedcoffee, red, _terminator};
enum class HairDensity {bold, few, average, high, massive, _terminator};
enum class BodyPartSize {small, middle, llong, terminator};

class BodyPart
{
protected:
	float _weight; //kilogramms
	BodyPartSize _size;
	BodyColor _color;
	HairDensity _hair;

public:
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
};

