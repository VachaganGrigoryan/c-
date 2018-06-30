#include <iostream>

int main()
{
	char r, c;
	std::cin >> c >> r;
	std::cout << ((c - 'a' + r - '1') % 2 == 0 ? "Black" : "White");

}