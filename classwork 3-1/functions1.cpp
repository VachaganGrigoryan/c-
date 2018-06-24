#include <iostream>
#include <cmath>
int main()
{
	//for (int i = 1; i <= 100; ++i)
	//	std::cout << sqrt(i) << "\n";

	for (int i = 1; i <= 100; ++i)
	{
		int sum = 0;
		int temp = i;
		while (temp != 0)
		{
			sum += temp % 10;
			temp /= 10;
		}
		std::cout << sum << "\n";
	}
}