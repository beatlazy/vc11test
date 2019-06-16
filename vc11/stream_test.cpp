#include "stdafx.h"
#include "stream_test.h"
#include <ios>
#include <iomanip>
#include <fstream>

using namespace std;

stream_test::stream_test()
{
}


stream_test::~stream_test()
{
}


void writeCharsetToFile(const string &filename)
{
	ofstream file(filename.c_str());

	if (!file)
	{
		cerr << "can't open file " << filename << endl;
		exit(EXIT_FAILURE);

	}

	for (int i = 32; i < 256; i++)
	{
		file << "value: " << setw(10) << i << " " << "char: " << static_cast<char> (i) << endl;

	}

}





int stream_test()
{
	/*
	int ret;
	ret = cin.get();
	cout << "ret=" << ret << endl;

	char buf[5];
	cin.get(buf, 5, ':');

	cout << buf << endl;

*/

	writeCharsetToFile("test.ini");


		

	return 0;
}



