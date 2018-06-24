#include<iostream>
#include<iomanip>
int main()
{
	std::cout << std::fixed << std::setprecision(2);
	double b1;
	double q;
	int n;
	std::cin >> b1 >> q >> n;
	double bn = b1;
	for (int i = 0; i < n - 1; ++i)
		bn *= q;
	std::cout << bn<<"\n" ;

}