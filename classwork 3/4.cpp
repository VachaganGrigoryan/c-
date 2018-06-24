#include<iostream>
#include<iomanip>
int main()
{
	int n;//barcrutyun
	int m;//laynutyun
	std::cin >> n>>m;
	
	for (int i = 0; i < n; ++i)
		{
		for (int j = 0; j < m; ++j)
		{
			std::cout << "*";

		}
		std::cout << "\n";
	}

}