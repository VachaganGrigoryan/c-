#include <iostream>
#include <string>
#include <vector>

void rotated_cout(std::string str, int pos)
{
	if (pos < str.size())
		std::cout << str[pos];
	else
		std::cout << " ";
}
int main()
{
	int n;
	std::cin >> n;
	std::string restOfFirstLine;
	std::getline(std::cin, restOfFirstLine);
	std::vector <std::string> currentLine(n);
	int maxlen = 0;
	for (int i = 0; i < n; ++i)
	{
		std::getline(std::cin, currentLine[i]);
		if (maxlen < currentLine[i].size())
			maxlen = currentLine[i].size();
	}

	for (int i = 0; i<maxlen; ++i)
	{
		for (int j = 0; j<n; ++j)
			rotated_cout(currentLine[j], i);
		std::cout << "\n";
	}
	return 0;
}