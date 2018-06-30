#include<iostream>
int main()
{
	int n;
	std::cin >> n;
	bool determinant = true;
	while (n != 1)
	{
		if (n % 2 != 0)
		{
			determinant = false;
			std::cout << "NO" << " ";
			break;
		}
		n /= 2;
	}
	if (!determinant)
	{
		std::cout << "YES" << " ";
	}
}