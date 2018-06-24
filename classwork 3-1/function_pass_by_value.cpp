#include <iostream>

int get_number_from_user()
{
	int x;
	std::cin >> x;
	return x;
}

void PrintAsterisks(int n)
{
	for (int i = 0; i < n; ++i)
		std::cout << "*";
}

void f(int n)
{
	n /= 2;
}

int main()
{
	int n = 20;
	f(n);
	std::cout << n;
	//PrintAsterisks(20);
}