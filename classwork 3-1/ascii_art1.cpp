#include <iostream>

int main()
{
	int w, h;
	std::cin >> w >> h;
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}