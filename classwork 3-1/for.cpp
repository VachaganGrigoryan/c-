#include <iostream>

/*
for(INIT; COND; INC)
{
	STATEMENTS:
}

INIT;
while(COND)
{
    STATEMENTS;
	INC;
}

*/


int main()
{
	/*
	int n;
	int sum = 0;
	for (std::cin >> n; n != 0; n /= 10)
	{
		sum += n % 10;
	}*/

	for (int i = 1; i <= 10; ++i)
	{
		std::cout << i << " ";
	}

	for (int i = 100; i != 0; i /= 2)
	{
		std::cout << i << " ";
	}

	for (int i = 100; i >= 0; --i)
	{
		std::cout << i << " ";
	}

	for (int i = 0; i < n; ++i) //n times
	{
		std::cout << "Hello";
	}
}