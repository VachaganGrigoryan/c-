#include <iostream>
#include <string>

char compare(const std::string& s1, const std::string& s2)
{
	if(s1.size() < s2.size())
		return '<';
	if(s1.size() > s2.size())
		return '>';
	for(int i = 0; i < s1.size(); ++i)
	{
		if(s1[i] < s2[i])
			return '<';
		else if(s1[i] > s2[i])
			return '>';
	}
	return '=';		
}

int main()
{
	std::string s1, s2;
	std::cin >> s1 >> s2;
	std::cout << compare(s1, s2);
}