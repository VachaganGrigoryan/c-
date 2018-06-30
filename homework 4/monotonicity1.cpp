#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> v[i];
	}
	bool achox = false, nvazox = false;
	for (int i = 1; i < n; ++i)
	{
		if (v[i - 1] < v[i])
			achox = true;
		else if (v[i - 1] > v[i])
			nvazox = true;
		else
		{
			achox = true;
			nvazox = true;
			break;
		}
	}

	if (achox == true && nvazox == true)
		std::cout << "Neither" << "\n";
	else if (achox == true)
		std::cout << "Ascending" << "\n";
	else
		std::cout << "Descending" << "\n";

	return 0;

}