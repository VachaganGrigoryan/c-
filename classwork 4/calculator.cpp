#include "stdafx.h"

#include <iostream>

int main()
{
	int a, b;
	char oper;

	std::cin >> a >> oper >> b;

	if (oper == '+')
		std::cout << a + b;
	else if (oper == '-')
		std::cout << a - b;
	else if (oper == '*')
		std::cout << a * b;
	else
		std::cout << "Unsupported operation";

}