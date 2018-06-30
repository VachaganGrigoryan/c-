#include <iostream>

int main()
{
	// A, B, C, ... Z, AA, AB, AC.... AZ BA BB BC... ZZ AAA
	// 26
	// 26 + 26*26
	// 26 + 26*26 + 26*26*26

	int pow26 = 1;
	int sum = 0;
	int qayl = 0;

	int n;
	std::cin >> n;

	while (sum < n)
	{
		pow26 *= 26;
		sum += pow26;
		++qayl;
	}

	std::cout << qayl;

}