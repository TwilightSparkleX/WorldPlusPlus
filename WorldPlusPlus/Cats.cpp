#include "pch.h"
#include "Cats.h"


Cats::Cats()
{
	std::cout << "Konstruktor of Cats\n";
}


Cats::~Cats()
{
	std::cout << "Destruktor of Cats\n";
}

void Cats::move() {
	std::cout << "Cat walks\n" << std::endl;
}
void Cats::eat(void) {
	std::cout << "Cat eats meat!\n" << std::endl;
}