#include <vector>
#include <iostream>

int maxModa(std::vector<int> v) 
{
	int	max = v[0];
	for (int i = 1; i < v.size(); ++i)
		if (max<v[i])
			max = v[i];
	return max;
}

void countingsort(std::vector<int>&v, int minElemvalu, int maxElemvalu)
{
	std::vector<int>counts(maxElemvalu - minElemvalu + 1); //counts[2001]
	for (int i = 0; i < v.size(); ++i)
		++counts[v[i] - minElemvalu];
	v.clear();
	int max = maxModa(counts);
	for (int i = 0; i < counts.size(); ++i)
		if (counts[i] == max)
			v.push_back(minElemvalu + i);
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	countingsort(v, -1000, 1000);
	std::cout << "\n" << maxModa(v) << "\n";
}