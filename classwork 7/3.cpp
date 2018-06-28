#include<iostream>
#include<vector>

int maxElement(const std::vector<int>& vec, int first, int last)
{
	if (last == first)
		return vec[first];
	int x = vec[first];
	int y = maxElement(vec, first + 1, last);
	return( x > y ? x : y);
	
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> vec[i];
	}
	int q;
	std::cin >> q;
	for (int j = 0; j < q; ++j)
	{
		int first, last;
		std::cin >> first >> last;
		std::cout<<maxElement(vec,first,last) << "\n";
	}
		
}