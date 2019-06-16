#include "stdafx.h"
#include "PolymorphictTest.h"
#include <iostream>

using namespace std;

PolymorphictTest::PolymorphictTest()
{
}


PolymorphictTest::~PolymorphictTest()
{
}

class Animal
{
public:
	Animal()
	{
	
	}
	~Animal()
	{

	}

	virtual void  Shout()
	{
		cout << "Animal::Shout" << endl;

	}
	void Hurt()
	{
		Shout();
	}



};
		

class Dog:public Animal
{
public:
	Dog()
	{

	}
	~Dog()
	{

	}


	virtual void  Shout()
	{
		cout << "Dog::Shout" << endl;

	}

	int _data;
};


int PolymorphictTest()
{

	Animal *a = new Dog();

	a->Hurt();

	delete a;


	try
	{

	}
	catch (const std::exception&)
	{
			

	}

	return 0;


}