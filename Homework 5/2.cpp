#include<iostream>
#include<vector>
#include<string>
int main()
{
	std::string S;
	std::string s;
	std::cin >> S >> s;
	//if (S.size() - s.size()>0)
	bool suffix = true;
	bool prefix = true;
	for (int j = 0; j < s.size(); ++j)
	{
		if (s[j] != S[j])
			prefix = false;
		if (s[s.size()-j-1] != S[S.size() - j-1])
			suffix = false;
	}
	if (suffix && prefix)
		std::cout << "bout" << "\n";
	else if (suffix)
		std::cout << "suffix" << "\n";
	else if (prefix)
		std::cout << "prefix" << "\n";
	else
		std::cout << "neither" << "\n";
}