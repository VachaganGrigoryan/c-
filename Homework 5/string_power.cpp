#include <iostream>
#include <string>


std::string power(const std::string& base, int exponent)
{
	if(exponent >= 0)
	{
		std::string result;
		for(int i = 0; i < exponent; ++i)
			result += base;
		return result;
	}
	exponent *= -1;
	if(base.length() % exponent != 0) //length() and size() are the same thing
		return "undefined";
	std::string candidate = base.substr(0, base.length() / exponent); //substr returns substring from given position containing given number of characters
	return power(candidate, exponent) == base ? candidate : "undefined"; //recursion!
}


int main()
{
	std::string s;
	int n;
	std::cin >> s >> n;
	std::cout << power(s, n);
}