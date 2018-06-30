#include "stdafx.h"
#include <iostream>
#include <vector>


int main()
{
	std::vector<int> v(3, 4);
	v.push_back(7); //4 4 4 7
	v.push_back(8); //4 4 4 7 8 
	v.push_back(9); //4 4 4 7 8 9

	v.pop_back(); //4 4 4 7 8

	v.resize(10); //4 4 4 7 8 0 0 0 0 0
	v.resize(12,3); // 4 4 4 7 8 0 0 0 0 0 3 3 
	v.resize(8); // 4 4 4 7 8 0 0 0
	v.resize(4, 9); //4 4 4 7
	
	v.clear(); //v becomes empty, same as v.resize(0);

	if (v.empty()) //if(v.size() == 0)
	{
		std::cout << "vec is empty";
	}
}