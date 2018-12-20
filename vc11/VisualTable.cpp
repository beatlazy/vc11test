#include "stdafx.h"
#include "VisualTable.h"


class Base
{
public:
	virtual void Funtest1(int i)
	{
		cout << "Base::Funtest1()" << endl;
	}
	virtual void Funtest2(int i)
	{
		cout << "Base::Funtest2()" << endl;
	}
	int _data;
};

typedef  void(__stdcall *PVTR)(int);


void vitualTableTest()
{
	Base a;
	a._data = 10;

	PVTR *vfunc = (PVTR *)(*((int *)&a));

	while (*vfunc)
	{
		(*vfunc)(3);
		vfunc++;

	}


}