#include<iostream>

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a%b);
}
int main()
{
	int n;
	std::cin >> n;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (gcd(i,n) == 1)
			++count;
	}
	std::cout << count;
	return 0;
}
