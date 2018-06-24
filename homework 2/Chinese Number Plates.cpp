#include<iostream>

int main()
{
	int n;
	std::cin >> n;
	int num_8 = 0;
	while (n != 0)
	{
		int num_last = n % 10;
		if (num_last == 8)
			++num_8;
		n /=10;
	}
	std::cout << num_8*1000<<"\n";

}