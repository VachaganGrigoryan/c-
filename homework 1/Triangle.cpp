#include <iostream>
#include <algorithm> //for std::swap
 
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c; //sides of the triangle
	//let's make sure c is the largest side:
	if (c < a)
	{
		std::swap(a, c); // std::swap swaps two variables
	}
	if (c < b)
	{
		std::swap(c, b);
	}
	//we know c is the largest side
	if (c >= a + b)
	{
		std::cout << "No triangle";
	}
	else if (c*c < a*a + b*b)
	{
		std::cout << "Acute trianle";
	}
	else if (c*c == a*a + b*b)
	{
		std::cout << "Right triangle";
	}
	else
	{
		std::cout << "Obtuse triangle";
	}
	std::cout << "\n";
}