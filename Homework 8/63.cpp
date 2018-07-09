#include <iostream>
#include <vector>
#include <cmath>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int>v(n);
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> v[i];
		sum += v[i];
	}

	int k1 = 0;
	int diff = sum;

	for (int t = 0; t < (1 << n); ++t)
	{
		for (int i = 0; i < n; ++i)
		{
			if ((t & (1 << i)) != 0)
			{
				k1 += v[i];
			}
		}
		int k2 = sum - k1;
		int new_diff = abs(k2 - k1);
		if (new_diff < diff)
		{
			diff = new_diff;
		}
		k1 = 0;
	}
	std::cout << diff << "\n";
}