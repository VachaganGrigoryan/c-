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
			std::cout << ((j + i) % 2 == 0 ? "O" : "X");
			
		}
		std::cout << "\n";
	}

}