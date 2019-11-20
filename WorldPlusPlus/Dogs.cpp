#include "pch.h"
#include "Dogs.h"


Dogs::Dogs()
{
	std::cout << "Konstruktor of Dogs\n";
}


Dogs::~Dogs()
{
	std::cout << "Destruktor of Dogs\n";
}

void Dogs::move() {
	std::cout << "Dog walks\n" << std::endl;
}
void Dogs::eat(void) { // метод eat переопределён и тоже является виртуальным
	std::cout << "Dog eats meat!\n" << std::endl;
}