#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

char tosmLetter(char n)
{
	if (n >= 'A' && n <= 'Z')
	{
		n+= - 'A' + 'a';
	}
	return n;
}

char toLetter(char n)
{
	if (n >= 'a' && n <= 'z')
	{
		n += -'a' + 'A';
	}
	return n;

}

int main()
{
	std::vector<char> v(3);
	for (int i = 0; i < 3; ++i)
		std::cin >> v[i];
	std::cout << toLetter(v[0]);
	std::cout << tosmLetter(v[1]);
	std::cout << tosmLetter(v[2]);
	std::cout << "\n";
	return 0;
}