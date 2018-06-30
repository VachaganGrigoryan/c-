#include<iostream>
#include<iomanip>
int main()
{
	int n;//barcrutyun
	int m;//laynutyun
	int x;//hastutyun
	std::cin >> n >> m >> x;
	for (int i = 1; i <= n; ++i)//barcrutyan cikl
	{
		for (int j = 1; j <= i; ++j)//laynutyan cikl
		{
			for (int i1 = 1; ++i1)//xorutyan cikl
			std::cout << "*";

		}
		std::cout << "\n";
	}

}