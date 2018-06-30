#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
int main()
{
	int n;
	bool achox = false;
	bool nvazox = false;
	std::cin >> n;
	int N;
	std::cin >> N;
	while (n > 1)
	{
		int M = N;
		std::cin >> N;

		if (M>N)
		{
			nvazox = true;
		}
		else if (M < N)
		{
			achox = true;
		}
		else
		{
			achox = true;
			nvazox = true;

			break;
		}
		n -= 1;
	}
	
	if (achox == true && nvazox == true)
		std::cout << "Neither" << "\n";
	else if (achox == true)
		std::cout << "Ascending" << "\n";
	else
		std::cout << "Descending" << "\n";

	return 0;
	
}