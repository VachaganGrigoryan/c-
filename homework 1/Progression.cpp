#include <iostream>

int main()
{
	int a1, a2, n;
	std::cin >> a1 >> a2 >> n;
	int diff = a2 - a1;
	int an = a1 + (n - 1)*diff;
	std::cout << "a[" << n << "] = " << an << "\n";
}