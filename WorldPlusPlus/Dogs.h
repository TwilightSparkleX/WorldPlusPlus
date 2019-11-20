#pragma once
#include "Animal.h"
class Dogs : public Animal
{
public:
	Dogs();
	~Dogs();
	void move();
	void eat(void);
};

