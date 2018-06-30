#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	int x;
	bool gtnvac = false;
	std::vector<int>v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	std::cin >> x;

	for (int i = n-1; i >= 0; --i)
	{
		if (v[i] == x)
		{
			gtnvac = true;
			std::cout << i + 1<<" ";
		}
	}
	std::cout << "\n";
	if (!gtnvac)
		std::cout << "-1" << "\n";
	return 0;
}