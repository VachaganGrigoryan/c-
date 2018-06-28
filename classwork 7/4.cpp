#include<iostream>
void hano(int n, char from, char to, char usin)
{
	if (n == 1)
	std::cout << " Move top ring from peg" << from << "to" << to << '\n';
	else
	{
		hano(n - 1, from, usin, to);
		hano(1, from, to, usin);
		hano(n - 1, usin, to, from);		
	}
}

int main()
{
	int n;
	std::cin >> n;
	hano(n, '1', '3', '2');
}