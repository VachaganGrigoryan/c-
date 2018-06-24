#include <iostream>

int main()
{
	/*
	    *
	   **
	  ***
	 ****
	*****
	*/
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
			std::cout << " ";
		for (int j = 0; j < i; ++j)
			std::cout << "*";
		/*
		for (int j = 0; j < n; ++i)
		{
			if (j < n - i)
				std::cout << " ";
			else
				std::cout << "*";
		}*/
		std::cout << "\n";
	}
}