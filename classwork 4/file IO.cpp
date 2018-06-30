#include "stdafx.h"

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream fin("D:\\numbers.txt");
	if (!fin.is_open())
	{
		std::cout << "Could not open input file";
		return 0;
	}
	int a, b;
	fin >> a >> b;
	std::cout << a + b;

	//output file stream
	std::ofstream fout("C:\\Users\\Alla\\Desktop\\my_test_file.txt");

	fout << "Hello";
	for (int i = 0; i < 100; ++i)
		fout << i;
}