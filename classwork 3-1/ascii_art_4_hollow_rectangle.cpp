#include <iostream>

int main()
{

	int h, w, t;
	std::cin >> h >> w >> t;


	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < w; ++j)
			std::cout << "*";
		std::cout << "\n";
	}

	for (int i = 0; i < h - 2 * t; ++i)
	{
		for (int j = 0; j < t; ++j)
			std::cout << "*";

		for (int j = 0; j < w - 2 * t; ++j)
			std::cout << " ";

		for (int j = 0; j < t; ++j)
			std::cout << "*";
		std::cout << "\n";
	}

	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < w; ++j)
			std::cout << "*";
		std::cout << "\n";
	}

	std::cout << "\n\n\n\n\n";

	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (i >= t && i < h - t && j >= t && j < w - t)
				std::cout << " ";
			else
				std::cout << "*";
		}
		std::cout << "\n";
	}

}