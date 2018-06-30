#include<iostream>
int main()
{
	int n;
	std::cin >> n ;
	std::cout << " The  sum of digits of " << n <<" is ";
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	std::cout << sum << "\n";

}