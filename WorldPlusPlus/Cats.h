#pragma once
#include "Animal.h"
class Cats : public Animal
{
public:
	Cats();
	~Cats();
	void move();
	void eat(void) override;
};

