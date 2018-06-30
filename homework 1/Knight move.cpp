#include <iostream>
#include <cmath>
int main()
{
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	int dx = std::abs(x1 - x2); //std::abs calculates the absolute value 
	int dy = std::abs(y1 - y2);
	if (dx == 1 && dy == 2 || dx == 2 && dy == 1)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
}