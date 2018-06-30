#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	std::cout << (n + 50) / 100 * 100;
	//In order to understand the above formula, consider that n/100*100 sets 
	//the last two digits to 0, i.e. rounds DOWN to the nearest hubdred. If 
	//we add 50 to our number, all numbers that should be rounded UP will
	//jump to the next hundrer, and when rounded down by /100*100 will yield
	//the correct result.
}