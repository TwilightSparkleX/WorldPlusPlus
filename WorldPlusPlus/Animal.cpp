#include "pch.h"
#include "Animal.h"


Animal::Animal()
{
	std::cout << "Konstruktor of Animal\n";
}


Animal::~Animal()
{
	std::cout << "Destruktor of Animal\n";
}

void Animal::move() 
{
	std::cout << "This animal moves in some way\n" << std::endl;
}
void Animal::eat() 
{
	std::cout << "Animal eat something!\n" << std::endl;
}
