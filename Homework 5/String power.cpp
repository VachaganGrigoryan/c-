#include<iostream>
#include<vector>
#include<string>
int main()
{
	std::string s;
	int k;
	std::cin >> s >> k;
	std::string M, m;
	if (k > 0)
		for (int i = 0; i < k; ++i)
			M += s;

	if (k < 0)
	{
		k = abs(k);
		if (s.size() % k == 0)
		{
			for (int i = 0; i < s.size() / k; ++i)
				M += s[i];
			for (int i = 0; i < k; ++i)
				m += M;
		}
		if (m != s)
			M = "undefined";
	}
	std::cout << M << "\n";
	return 0;
}
