#include <iostream>
#include <vector>
#include<fstream>
int main()
{
	int n;
	std::cin >> n;
	int sum = 0, v;
	for (int i = 1; i < n; ++i)
	{
		std::cin >> v; 
		sum += i - v;
	}
	std::cout << n - std::abs(sum) << "\n";
	return 0;
}
