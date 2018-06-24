#include <vector>
#include <iostream>
#include <functional>
#include <ctime>
#include <cstdlib>
#include <algorithm>


void print(const std::vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
		std::cout << v[i] << " ";
	std::cout << "\n";
}


void Team(std::vector<int>& v)
{
	std::vector<int> player1, player2;
	for (int i = 0; i < v.size(); ++i)
	{
		int max_ind = i;
		for (int j = i; j < v.size(); ++j)
		{
			if (v[j] > v[max_ind])
				max_ind = j;
		}

		if (i % 2 == 0)
			player1.push_back(v[max_ind]);
		else
			player2.push_back(v[max_ind]);

		std::swap(v[i], v[max_ind]);
	}
	print(player1);
	print(player2);
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	Team(v);
	return 0;
}

