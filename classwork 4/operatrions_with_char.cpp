#include "stdafx.h"
#include <iostream>

int main()
{
	char c;
	std::cin >> c;
	std::cout << (char)(c + 1);

	//check if c is a lowercase latin letter
	if (c >= 'a' && c <= 'z')
	{
		//let's print the corresponging uppercase letter
		std::cout << (char)(c - 'a' + 'A');
	}

	if (c >= '0' && c <= '9')
	{
		//print the square of the digit
		std::cout << (c - '0') * (c - '0');
	}
}