#include <iostream>

bool isPrime(int n)
{
	for(int i = 2; i * i <= n; ++i)
		if(n % i == 0)
			return false;
	return n != 1;
}

int main()
{
	int n;
	std::cin >> n;
	for(int i = 2; /*no condition here*/; ++i)
	{
		if(isPrime(i) && isPrime(n-i))
		{
			std::cout << i << " " << n - i << "\n";
			break;
		}
	}
}