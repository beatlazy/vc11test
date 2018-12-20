#include "stdafx.h"
#include "OperatorTest.h"
#include<iostream>
#include<sstream>

using namespace std;


class FuncObj
{
public:
	FuncObj():FuncObj(0)
	{
			
	}

	FuncObj(int n) :n_(n)
	{
		cout << "FuncObj constructor" << endl;
	}
	virtual ~FuncObj()
	{
		cout << "FuncObj destructor" << endl;
	}

	FuncObj(FuncObj & obj)
	{
		cout << "FuncObj Copy constructor" << endl;
		n_ = obj.n_;
	}

	FuncObj & operator=(FuncObj & obj)
	{
		cout << "operator=" << endl;
		n_ = obj.n_;
		return *this;
	}
	//操作符()重载
	bool operator()(int v)
	{
		cout << "operator() parameter int" << endl;
		return v > n_;
	}

	//操作符()重载
	bool operator[](int v)
	{
		cout << "operator[] parameter int" << endl;
		return v > n_;
	}


	//操作符()重载
	bool operator()()
	{
		cout << "operator() parameter none" << endl;
		return true;
	}

	//类型转换
	operator bool()
	{
		cout << "operator bool" << endl;
		return n_ != 0;

	}
	//类型转换
	operator string()
	{
		cout << "type convert" << endl;
		stringstream sstr;
		sstr << n_;
		return sstr.str();
	}


private:
	int n_;

};

int test_operator()
{
	FuncObj obj(10);
	if (obj(11))
	{
		cout << "11 greater than 10" << endl;
	}
	if (obj())
	{
		cout << "obj is booleam" << endl;
	}

	string str(obj);
	cout << str << endl;

	cout << "*************************************" << endl;

	bool o = obj;

	if (obj)
	{
		cout << "obj is bool" << endl;
	}

	cout << "*************************************" << endl;

	FuncObj a(10);
	FuncObj c(10);
	FuncObj d = c;
	FuncObj e;
	e = d;

	cout << "*************************************" << endl;



	//测试 整数 取反 
	unsigned char i = 0x80;
	printf("%d  ,%u  %0x\n", ~i, ~i, ~i);

	int  ii = 0x80;
	printf("%d  ,%u  %0x\n", ~ii, ~ii, ~ii);

	return 0;

}

