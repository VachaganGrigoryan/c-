#include <iostream>
#include <cctype>


int main()
{
	char a, b, c;
	std::cin >> a >> b >> c;
	std::cout << (char)toupper(a) << (char)tolower(b) << (char)tolower(c);
}