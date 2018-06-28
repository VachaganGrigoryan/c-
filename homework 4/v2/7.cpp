#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for(int i = 0; i < n; ++i)
		std::cin >> v[i];

	bool asc = true,
		 desc = true;

	for(int i = 0; i + 1 < v.size(); ++i)
	{
		if(v[i] <= v[i+1])
			desc = false;
		if(v[i] >= v[i+1])
			asc = false;
		if(!asc && !desc)
		{
			std::cout << "Neither";
			return 0;
		}
	}
	std::cout << (asc ? "Ascending" : "Descending");
}