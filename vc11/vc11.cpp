// vc11.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "OperatorTest.h"
#include "PolymorphictTest.h"
#include "stream_test.h"


int main()
{



	/*

	std::function<void(int)> func;
	func = printA;
	func(2);

	//std::function<void()> func_1 = []() {cout << "hello world " << endl; };
	auto func_2 = []() {cout << "hello world " << endl; };
	func_2();

	*/



	/*

	string str = "hello";
	vector<string> v;
	v.push_back(str);
	
	string tmp = "1111";
	tmp = std::move(str);

	//v.push_back(std::move(str));

	//cout << "After move st is\"" << str << "\"\n";

	//cout << "vector are\"" << v[0] << "\",\"" << v[1] << "\"\n";

	cout << "str   " << str << endl;
	cout << "tmp   " << tmp << endl;




	*/


	//test_operator();
	//PolymorphictTest();
	stream_test();

	


	cout << "****************************" << endl;









	
	return 0;
}

