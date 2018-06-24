#include <vector>
#include <iostream>
#include <string>
bool Kent(std::vector<int>&counts,std::string& v)
{
	bool ket = true;
	for (int i = 0; i < counts.size(); ++i)
		if (counts[i]%2==1)
			if (ket){
				ket = false;
				v = 'a' + i;
				--counts[i];
			}
			else 
		 		return false;
	return true;
}

void Palindrom(std::string&v)
{
	std::vector<int>counts(26);
	for (int i = 0; i < v.size(); ++i)
		++counts[v[i]-97];

	if (Kent(counts,v)){
		for (int i = counts.size()-1; i >= 0; --i)
			for (int j = 0; j < counts[i]; j+=2){	
				char c = ('a' + i);
				v = c + v + c;
			}
		std::cout << "\n" << v << "\n";
	}else
		std::cout << "\n" << "impossible" << "\n";
}
int main()
{
	std::string dondorodondo;
	std::cin >> dondorodondo;
	Palindrom(dondorodondo);
}