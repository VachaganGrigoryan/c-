#include <iostream>
#include <vector>
#include<fstream>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int>v(n-1);
	for (int i = 0; i < n-1; ++i)
		std::cin >> v[i];
	for (int i = 1; i <= n; ++i)
		if (count(v.begin(), v.end(), i) == 0)
			std::cout << i;
		std::cout << "\n";
	return 0;
}