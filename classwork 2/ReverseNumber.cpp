#include <iostream>

// 2157 -> 7512

//
//751

int main()
{
	int n;
	std::cin >> n;

	int reversed = 0;

	while (n != 0)
	{
		reversed *= 10;
		reversed += n % 10;
		n /= 10;
	}

	std::cout << reversed;
}