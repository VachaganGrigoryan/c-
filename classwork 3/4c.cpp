#include<iostream>
#include<iomanip>
int main()
{
	int n;//barcrutyun
	int m;//laynutyun
	std::cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j <=n-i; ++j)
		{
			std::cout << "*";

		}
		std::cout << "\n";
	}

}