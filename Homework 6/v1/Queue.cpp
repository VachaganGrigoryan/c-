#include <vector>
#include <iostream>
#include <functional>
#include <ctime>
#include <cstdlib>
#include <algorithm>

void selectionSort(std::vector<int>& v, std::vector<int>& age_ind)
{
	for (int i = 0; i < v.size(); ++i)
	{
		int min_ind = i;
		for (int j = i; j < v.size(); ++j)
		{
			if (v[j] < v[min_ind])
				min_ind = j;
		}
		std::swap(v[i], v[min_ind]);
		std::swap(age_ind[i], age_ind[min_ind]);
	}
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::vector<int> age_ind;
	for (int i = 0; i < n; ++i) {
		std::cin >> v[i];
		age_ind.push_back(i + 1);
	}
	selectionSort(v, age_ind);
	for (int i = 0; i < age_ind.size(); ++i)
		std::cout << age_ind[i] << " ";
}