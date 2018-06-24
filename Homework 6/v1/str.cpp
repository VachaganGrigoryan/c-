#include<iostream>
#include<fstream>
int main()
{
	// std::ofstream my_file("1_10000.txt");
	// for (int i = 1; i < 10000; i++)
	// 	my_file << i;
	
	int n;
	std::cin >> n;
	std::fstream my_file("1_10000.txt");
	char a;
	for (int i = 0; i < n; i++)
		my_file >> a;
	std::cout << a << "\n";


}