#include "stdafx.h"
#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);

	for (int i = 0; i < n; ++i)
		std::cin >> v[i];

	int min = v[0];
	for (int i = 1; i < n; ++i)
		if (v[i] < min)
			min = v[i];

	std::cout << min;

}