#include "stdafx.h"

#include <iostream>
#include <iomanip>

int main()
{
	for (int i = 1; i <= 100; ++i)
	{
		std::cout << std::setw(8) << i << ' ' << 
			std::setw(8) << i * i << "\n";
	}
	std::cout << "\n\n";
	
	std::cout << std::left;
	for (int i = 1; i <= 100; ++i)
	{
		std::cout << std::setw(8) << i << ' ' <<
			std::setw(8) << i * i << "\n";
	}

	std::cout << std::right;
	std::cout << std::setfill('.');
	for (int i = 1; i <= 100; ++i)
	{
		std::cout << std::setw(8) << i << ' ' <<
			std::setw(8) << i * i << "\n";
	}


	//std::hex, std::oct, std::dec
	//std::uppercase std::lowercase


	std::cout << std::hex << 255; //prints ff
	std::cout << std::uppercase << 255; //prints FF

	//std::cout << std::boolalpha //noboolalpha
}