#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<bool> occurs(n); //occurs[i] shows if the number i+1 is in the list.
	for(int i = 0; i < n-1; ++i)
	{
		int num;
		std::cin >> num;
		occurs[num - 1] = true;
	}
	for(int i = 0; i < n; ++i)
	{
		if(!occurs[i])
		{
			std::cout << i + 1;
			break;
		}
	}
}