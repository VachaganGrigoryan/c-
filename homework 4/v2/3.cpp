#include <iostream>
#include <iomanip>

int main()
{
	char dummy;
	int r, g, b;
	//(r; g; b)
	std::cin >> dummy >> r >> dummy >> g >> dummy >> b >> dummy;
	std::cout << std::hex << std::uppercase << std::setfill('0');
	std::cout << "#" << std::setw(2) << r 
		             << std::setw(2) << g 
					 << std::setw(2) << b;

}