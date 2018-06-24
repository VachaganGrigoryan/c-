#include <iostream>

int main()
{
	//1626 -> 2

	int n;
	std::cin >> n;

	int numOf6 = 0;

	while (n != 0)
	{
		int last_digit = n % 10;
		if (last_digit == 6)
			++numOf6;
		n /= 10;
	}
	
	std::cout << numOf6;
}