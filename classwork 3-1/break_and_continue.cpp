#include <iostream>

int main()
{
	for (int i = 1; i <= 10; ++i)
	{
		if (i == 4)
			break;
		std::cout << i << " ";
	}
	std::cout << "\n\n";
	for (int i = 1; i <= 10; ++i)
	{
		if (i == 4)
			continue;
		std::cout << i << " ";
	}

}