#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	int x;
	bool gtnvac = false;
	std::vector<int>v(n);
	for (int i = 1; i <= n; ++i)
		std::cin >> v[i];
	std::cin >> x;

	for (int i = n;i > 0; --i)
	{		
		if (v[i] == x)
		{
			gtnvac = true;
			std::cout << i;
		}
	}
	if(!gtnvac)
		std::cout << "-1" << "\n";
	return 0;
}