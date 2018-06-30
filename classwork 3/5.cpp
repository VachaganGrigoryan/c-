#include<iostream>
int bajanararigumar(int n)
{
	int Sum = 0;
	for (int i = 1; i <= n/2; ++i)
	{
		if (n % i == 0)
		{
			Sum += i;
		}
	}
	return Sum;
}


bool is_perfect(int n)
{
	return n == bajanararigumar(n);
	
}


int idealakanqanak(int a, int b)
{
	int count=0;
	for (int i = a; i <= b; ++i)
	{
		if (is_perfect(i))
			++count;
	}
	return count;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << idealakanqanak(a,b);
}