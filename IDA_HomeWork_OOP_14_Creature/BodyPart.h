#pragma once
#include <iostream>

enum class BodyColor {white, yellow, black, milkedcoffee, red, _end_of_list_};
enum class HairDensity {bold, few, average, high, massive, _end_of_list_};
enum class BodyPartSize {smalll, middle, llong, _end_of_list_};

class BodyPart
{
protected:
	/* 
	изначально это был _weight(как бы у каждой части должен быть такой параметр независимо от специализации)
	Но в связи с наследованием virtual public получается это должно быть какое-то общее свойство всех частей тела 
	и _weight был заменен на _density
	Сейчас получается, если нужно ввести _weight надо в каждом классе конечности вводить такое поле
	*/

	float _density; // kilogramms/cubic meter
	BodyPartSize _size;
	BodyColor _color;
	HairDensity _hair;

public:
	// Constructors // Initialisation // Destructors // Memory Clean -------

	BodyPart() = delete; // чтобы не было возможности создавать пустые экземпляры
	BodyPart(float density,
	BodyPartSize size,
	BodyColor color,
	HairDensity hair):
		_density(density),
		_size(size),
		_color(color),
		_hair(hair)
	{	}

	virtual ~BodyPart() = default;

	// Shows ---------------------------------------------------------------

	//virtual float size()		{ return _density; }
	float size() { return _density; }
	//virtual float size() const	{ return _density; }

};

