#include "pch.h"
#include "Army.h"

using namespace std;
Army::Army()
{
	cout << "Itf const\n";
}


Army::~Army()
{
	cout << "Itf dest\n";
}

void Army::talk()
{
	cout << "Hello from armya\n";
}

General::General()
{
	cout << "Create General\n";
}

General::~General()
{
	cout << "Kill General\n";
}

void General::talk()
{
	cout << "General poslal vas nahui\n";
}

Mayor::Mayor()
{
}

Mayor::~Mayor()
{
}

Leutinant::Leutinant()
{
}

Leutinant::~Leutinant()
{
}

Ryadov::Ryadov()
{
}

Ryadov::~Ryadov()
{
}
