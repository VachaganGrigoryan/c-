#include<iostream>
#include<vector>
#include<string>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::vector<int> k(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	for (int i = 0; i < n; ++i)
		std::cin >> k[i];
	for (int i = 0; i < n; ++i)
		v.push_back(v[i]);
	bool search;
	for (int i = 0; i < v.size()-k.size(); ++i)
	{
	    search = true;
		for (int j = 0; j < k.size(); ++j)
			if (k[j] != v[i + j])
			{
				search = false;
				break;
			}
		if (search)
			break;
	}
	(search ? std::cout << "YES\n" : std::cout << "NO\n");
}


		
		







