#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::cout << n << " * " << m << " = ";
	std::cout << n;
	for (int i = 0; i < m - 1; ++i)
		std::cout << " + " << n;
	std::cout << " = " << n*m;	
}