#include <iostream>
#include <vector>
void subset(std::vector <int>& v, int mask)
{
	bool first = true;
	std::cout << "{";
	for (int i = 0; i < v.size(); ++i)
	{
		if (mask & 1 << i)
		{
			if (!first)
			{
				std::cout << ",";
			}
			std::cout << v[i];
			first = false;
		}
	}
	std::cout << "}" << "\n";
}
int main()
{
	int n;
	int mask;
	std::cin >> n;
	std::vector <int> v(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> v[i];
	}
	for (int mask = 0; mask < 1 << v.size(); ++mask)
	{
		subset(v, mask);
	}
}