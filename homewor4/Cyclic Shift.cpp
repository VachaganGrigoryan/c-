#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
int main()
{
	int N;
	int k;
	std::cin >> N >> k;
	std::vector<int> v(N);
	for (int i = 0; i < N; ++i)
		std::cin >> v[i];


	std::vector<int> vec;
	for (int j = 0; j < k; ++j)
	{
		vec.push_back(v[N-k]);//
		--k;
	}
	v.pop_back(k);
	std::cout << vec[0] << v[i] << "\n";

	return 0;

}