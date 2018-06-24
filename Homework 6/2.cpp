#include <vector>
#include <iostream>
#include <functional>
#include <ctime>
#include <cstdlib>
#include <algorithm>

void selectionSort(std::vector<double>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		int max_ind = i;
		for (int j = i; j < v.size(); ++j)
		{
			if (v[j] > v[max_ind])
				max_ind = j;
		}
		std::swap(v[i], v[max_ind]);
	}
}

int main()
{
	int n,m;
	std::cin >> n >> m;
	std::vector<double> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	selectionSort(v);
	double sum = 0;
	for (int i = 0; i < (n>m ? m : n); ++i)
		sum += v[i];
	std::cout << sum << "\n";

	return 0;
}