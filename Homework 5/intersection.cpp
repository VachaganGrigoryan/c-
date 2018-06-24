#include <iostream>
#include <vector>

std::vector<int> readVec()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for(int i = 0; i < n; ++i)
		std::cin >> v[i];
	return v;
}

bool containsElement(const std::vector<int>& v, int elem)
{
	for(int i = 0; i < v.size(); ++i)
		if(v[i] == elem)
			return true;
	return false;
}

std::vector<int> intersection(const std::vector<int>& v1, const std::vector<int>& v2)
{
	std::vector<int> result;
	for(int i = 0; i < v1.size(); ++i)
		if(containsElement(v2, v1[i]))
			result.push_back(v1[i]);
	return result;
}

void print(const std::vector<int>& v)
{
	for(int i = 0; i < v.size(); ++i)
		std::cout << v[i] << " ";
}

int main()
{
	print(intersection(readVec(), readVec()));
}