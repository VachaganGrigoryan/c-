#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	bool has6 = false;

	while (n != 0)
	{
		if (n % 10 == 6)
		{
			has6 = true;
			break;
		}
		n /= 10;		
	}

	if (has6)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

	
}