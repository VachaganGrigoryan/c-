#include<iostream>
#include<iomanip>
int main()
{
	int N;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if ((j % 2 == 1) && (i%2==1) || (j % 2 == 0) && (i % 2 == 0))
			{
				std::cout << "O";
			}
			else
			{
				std::cout << "X";
			}
		}
		std::cout << "\n";
	}

}