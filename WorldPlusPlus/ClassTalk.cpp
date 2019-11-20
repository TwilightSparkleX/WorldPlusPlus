#include "pch.h"
#include "ClassTalk.h"
#include "String.h"

ClassTalk::ClassTalk()
{
	std::cout << "Konstruktor of ClassTalk\n";
}


ClassTalk::~ClassTalk()
{
	std::cout << "Destrucktor of ClassTalk\n";
}

int ClassTalk::say_number(int num)
{
	num = key + 5 + num % 2;
	return num;
}
