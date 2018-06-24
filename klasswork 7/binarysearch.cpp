#include<iostream>
#include <vector>
bool bshelp(std::vector<int>& v, int elem, int start, int end)
{
	if (start == end)
		return false;
	int mid = (start + end) / 2;
	if (elem == v[mid])
		return true;
	if (elem < v[mid])
		return bshelp(v, elem, start, mid);
	if (elem > v[mid])
	{
		return bshelp(v, elem, mid + 1, end);
	}

}
bool bs(std::vector <int>& v, int x)
{
	return bshelp(v, x, 0, v.size())
}
int main()
{
	int n;
	std::cin >> n;
	std::vector <int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	int x;
	while (std::cin >> x)
	{
		std::cout << (bs(v, x) ? "yes" : "No");
	}
}