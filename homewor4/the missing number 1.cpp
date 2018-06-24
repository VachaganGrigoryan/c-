#include <iostream>
#include <vector>
#include<fstream>
#include <numeric>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int>v(n - 1);
	int sum;
	for (int i = 0; i < n - 1; ++i)
		std::cin >> v[i];

	sum = std::accumulate(v.begin(), v.end(), 0); 
	std::cout << sum << "\n";


	return 0;
}
