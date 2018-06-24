#include <iostream>

double dist(double x1, double y1, double x2, double y2)
{
	double dx = x1 - x2;
	double dy = y1 - y2;
	return sqrt(dx*dx + dy * dy);
}

bool isPrime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i*i <= n; ++i)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
	int count = 0;
	for (int i = 1; i <= 1000000; ++i)
		if (isPrime(i))
			++count;
	std::cout << count;

/*	double x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	std::cout << dist(x2, y2, x1, y2);*/
}