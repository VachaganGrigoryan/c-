#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	bool all_6 = true;

	while (n != 0)
	{
		if (n % 10 != 6)
		{
			all_6 = false;
			break;
		}
		n /= 10;
	}

	if (all_6)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}
}