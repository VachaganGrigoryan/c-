#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for(int i = 2; i * i <= n; ++i)
	{
		while(n % i == 0)
		{
			n /= i;
			std::cout << i << (n == 1 ? "" : "*");
		}
	}
	if(n != 1)
		std::cout << n;
	std::cout << "\n";
}