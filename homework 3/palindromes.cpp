#include <iostream>

bool isPalindrome(int n);

void PrintPalindromesInRange(int a, int b)
{
	for(int i = a; i <= b; ++i)
		if(isPalindrome(i))
			std::cout << i << " ";
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	PrintPalindromesInRange(a, b);
}


int reverse(int n)
{
	int rev = 0;
	while(n != 0)
	{
		rev *= 10;
		rev += n % 10;
		n /= 10;
	}
	return rev;
}
bool isPalindrome(int n)
{
	return n == reverse(n);
}