#pragma once
#include<iostream>
class Army
{
public:
	Army();
	virtual~Army();
	virtual void talk();
};

class Ryadov : public Army
{
public:
	Ryadov();
	~Ryadov();
};

class Leutinant : public Ryadov
{
public:
	Leutinant();
	~Leutinant();
};

class Mayor : public Leutinant
{
public:
	Mayor();
	~Mayor();
};

class General : public Mayor
{
public:
	General();
	~General();
	void talk() override;
};




