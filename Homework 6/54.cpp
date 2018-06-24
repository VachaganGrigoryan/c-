#include <iostream>
#include <vector>
int MaxModa(std::vector <int>& v, int minElemvalu, int maxElemvalu)
{
	std::vector <int> count(maxElemvalu - minElemvalu + 1);
	for (int i = 0; i < v.size(); ++i)
		++count[v[i] - minElemvalu];
	int maxcount = 1;
	int moda = 0;
	for (int i = 0; i < count.size(); ++i)  
		if (maxcount == count[i] && moda < i)
			moda = i;
		else if (maxcount < count[i]) 
		{
			moda = i;
			maxcount = count[i];
		}

	return moda + minElemvalu;
}
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for(int i = 0; i < n; ++i)
		std::cin >> v[i];
	std::cout << MaxModa(v, -1000, 1000) << "\n";
}
