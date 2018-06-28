#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for(int i = 0; i < n; ++i)
		std::cin >> v[i];
	int x;
	std::cin >> x;
	bool found = false;
	for(int i = n - 1; i >= 0; --i)
	{
		if(v[i] == x)
		{
			found = true;
			std::cout << i + 1 << " ";
		}
	}
	if(!found)
		std::cout << -1;
}