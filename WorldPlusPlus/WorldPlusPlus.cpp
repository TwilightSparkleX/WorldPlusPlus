// WorldPlusPlus.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include "Cats.h"
using namespace std;
int main()
{
	cout << "Hello World!\n";
	Animal *am = new Animal;
	am->eat();
	delete am;
	return 0;
}

