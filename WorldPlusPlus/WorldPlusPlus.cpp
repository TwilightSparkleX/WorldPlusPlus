// WorldPlusPlus.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

class A {
private:
	int c = 0;
	static int countclasses ;
public:
	

	A() {
		cout << "AK\n";
	}
	~A() {
		cout << "AD\n";
	}
	void setc(int cf) {
		c = cf;
	}
	int getc() {
		return c;
	}
	static void ikr() {
		countclasses++;
		cout <<"count of class"<< countclasses<< endl;
	}
};
int A::countclasses = 0;

class IInterface
{
public:
	vector<A *> allclass;
	
	IInterface() {
		cout << "IK\n";
	}
	~IInterface() {
		
		for (int i = 0; i < allclass.size();i++) {
			cout << "Delete class at " << allclass.at(i)<<"\n";
			delete allclass.at(i);
		}
		cout << sizeof(allclass);
		cout << "ID\n";
	}
	void create_new_class(int num) {
		A *a = new A();
		cout << a;
		allclass.push_back(a);
		a->setc(num);
		cout << a->getc() << endl;
		a->ikr();
		//delete a;
	}
};


int main(void)
{
	IInterface *itf = new IInterface();
	itf->create_new_class(1);
	itf->create_new_class(4);
	delete itf;
	return 0;
}