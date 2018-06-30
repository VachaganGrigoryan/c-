#include<iostream>
int main()
{
	int N;
	std::cin >> N;
	int P = 1;//factorial
	int C=1;//cikli qanak
	
	while (C<=N)
	{
		P *=C;
		++C;
	}
	std::cout << P << " ";
	

}