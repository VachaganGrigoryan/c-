#include <iostream>

int main()
{
	int n; //3-digit
	std::cin >> n;
	int d1 = n / 100;
	int d2 = n / 10 % 10; 
	int d3 = n % 10;
	std::cout << d1 + d2 + d3 << "\n";
}