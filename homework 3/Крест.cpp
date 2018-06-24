#include <iostream>

void printNTimes(char character, int count)
{
	for(int i = 0; i < count; ++i)
		std::cout << character;
}

void printCrossTop(char character, int width, int thickness)
{
	for(int i = 0; i < (width - thickness)/2; ++i)
	{
		printNTimes(' ', (width-thickness)/2);
		printNTimes(character, thickness);
		std::cout << "\n";
	}
}

void printCrossMiddle(char character, int width, int thickness)
{
	for(int i = 0; i < thickness; ++i)
	{
		printNTimes(character, width);
		std::cout << "\n";
	}
}

void printCross(char character, int width, int thickness)
{
	printCrossTop(character, width, thickness);
	printCrossMiddle(character, width, thickness);
	printCrossTop(character, width, thickness);
}

int main()
{
	const char symbol = '*';
	int width, thickness;
	std::cin >> width >> thickness;
	printCross(symbol, width, thickness);
}