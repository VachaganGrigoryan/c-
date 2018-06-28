#include<iostream>

int power(int a, int n) // a = 5; n =  // a = 5; n = 2 // a = 5; n = 1  // a = 5; n = 0
{
	return n==0 ? 1 : a*power(a, n-1); // n ==0 ? (1) : (((5 * power(5, 2)) * power(5, 1)) * 1
}
int main()
{
	int a,n;
	std::cin >> a >> n;
	std::cout << power(a,n); // power(5,3) // a = 5; n = 1
	return 0;
}
