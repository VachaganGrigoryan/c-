#include <iostream>

int main()
{
	/*while (condition)
	{
		statements;
	}*/

	int x = 10;
	while (x > 0)
	{
		std::cout << ".";
		--x;
	}


	int n = 1;

	while (n <= 100)
	{
		std::cout << n << " ";
		++n;
	}
}