#include <vector>
#include <iostream>
#include <string>
bool Kent(std::vector<int>&counts, std::string& palind)
{
	bool ket = true;
	for (int i = 0; i < counts.size(); ++i)
		if (counts[i] % 2 == 1)
			if (ket) {
				ket = false;
				palind = 'a' + i;
				--counts[i];
			}
			else
				return false;
	return true;
}

void Palindrom(const std::string&v)
{
	std::vector<int>counts(26);
	for (int i = 0; i < v.size(); ++i)
		++counts[v[i] - 'a'];
	std::string palind;
	if (Kent(counts, palind)) {
		for (int i = counts.size() - 1; i >= 0; --i)
			for (int j = 0; j < counts[i]; j += 2) {
				char c = ('a' + i);
				palind = c + palind + c;
			}
		std::cout << "\n" << palind << "\n";
	}
	else
		std::cout << "\n" << "impossible" << "\n";
}
int main()
{
	std::string s;
	std::cin >> s;
	Palindrom(s);
}