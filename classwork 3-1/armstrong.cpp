#include <iostream>

int power(int a, int b)
{
	int pat = 1;
	for (int i = 0; i < b; ++i)
		pat *= a;
	return pat;
}

int digitCount(int n)
{
	int pat = 0;
	while (n != 0)
	{
		++pat;
		n /= 10;
	}
	return pat;
}

int DigitPowSum(int n)
{
	int qanak = digitCount(n);
	int sum = 0;
	while (n != 0)
	{
		sum += power(n % 10, qanak);
		n /= 10;
	}
	return sum;
}

bool isArmstrong(int n)
{
	return n == DigitPowSum(n);
}


int main()
{
	for (int i = 1; i <= 1000000; ++i)
		if (isArmstrong(i))
			std::cout << i << " ";
}

