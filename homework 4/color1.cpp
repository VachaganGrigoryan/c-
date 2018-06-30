#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
int main()
{
	int r, g, b;
	char k;
	std::cin >> k >> r >> k >> g >> k >> b >> k;
	std::cout << '#';
	std::cout << std::setfill('0') << std::hex << std::uppercase  << std::setw(2)<<r << std::setw(2) << g << std::setw(2) << b;
	std::cout << "\n";
	return 0;
}
