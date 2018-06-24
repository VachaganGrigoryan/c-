#include <iostream>
#include <string>


bool isPrefix(const std::string& big, const std::string& small)
{
	return big.substr(0, small.size()) == small; //substr returns substring from given position with the given number of characters
}
bool isSuffix(const std::string& big, const std::string& small)
{
	if(big.size() < small.size())
		return false;
	int start_pos = big.size()-small.size();
	return big.substr(start_pos) == small; //if we don't specify the number of chars, the substring till the end of the string is returned.
}


int main()
{
	std::string s1, s2;
	std::cin >> s1 >> s2;
	const bool isPrefix = ::isPrefix(s1, s2); //since the local variable and the global function have the same name, we use :: to disambiguate (:: means global)
	const bool isSuffix = ::isSuffix(s1, s2);
	if(isPrefix && isSuffix)
		std::cout << "Both";
	else if(isPrefix)
		std::cout << "Prefix";
	else if(isSuffix)
		std::cout << "Suffix";
	else
		std::cout << "Neither";
}