#include <iostream>
#include <string>
void rotated_cout(std::string str, int pos)
{
	if(pos < str.size())
		std::cout << str[pos];
	else 
		std::cout << " ";
}
int max_len(std::string *currentLine, int n)
{
	if(n<1)
		return 0;
	int maxlen = currentLine[0].size();
	for(int i=1; i<n; ++i)
		if(maxlen < currentLine[i].size())
			maxlen = currentLine[i].size();
	return maxlen;
}
int main()
{
	int n;
	std::cin >> n;
	std::string restOfFirstLine;
	std::getline(std::cin, restOfFirstLine);
	std::string currentLine[n];
	for(int i = 0; i < n; ++i)
	{
	    std::getline(std::cin, currentLine[i]);
	}

	int maxlen = max_len(&currentLine[0],  n);
 	for(int i=0; i<maxlen; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			rotated_cout(currentLine[j], i);
		}
		std::cout<<"\n";
	}
	std::cout<<"\n";

	return 0;
}