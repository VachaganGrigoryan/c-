#include <iostream>

int main()
{
	//the whole point of this trivial problem was to make sure that you can 
	//read and simplify relatively complex and redundant problem statements.
	int R, r1, r2;
	std::cin >> R >> r1 >> r2;
	if (R >= r1 + r2)
		std::cout << "YES\n";
	else
		std::cout << "NO\n";
}