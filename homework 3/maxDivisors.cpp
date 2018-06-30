#include <iostream>

int countDivisors(int n)
{
	/*
	This function counts the number of divisors of n, not in O(n) time, but in O(sqrt(n)).
	Supppose n = a*b. If a < sqrt(n) then b > sqrt(n), and both a and b are divisors of n.
	Thus, for each divisor strictly less than sqrt(n) there exists another corresponding divisor larger than sqrt(n).
	We traverse potential divisors up to the square and each time add 2 to the count. The only exception is when 
	n = x*x where x is sqrt(n). We shouldn't count x twice.
	*/
	int count = 0;
	for(int i = 1; i * i <= n; ++i)
	{
		if(n % i == 0)
		{			
			count += (i*i < n ? 2 : 1);
		}
	}
	return count;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	int numberWithMostDivisors = a;
	int largestDivisorCount = countDivisors(a);
	for(int i = a + 1; i <= b; ++i)
	{
		int divCount = countDivisors(i);
		if(divCount > largestDivisorCount)
		{
			numberWithMostDivisors = i;
			largestDivisorCount = divCount;
		}
	}
	std::cout << numberWithMostDivisors << "\n";
}