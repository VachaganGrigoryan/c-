#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N, k;
	std::cin >> N >> k;
	std::vector<int> vect(N);
	for (int i = 0; i<N; i++)
		std::cin >> vect[i];
	if (k>N)
		k %= N;

	for (int i = N - k; i <= N - 1; i++)
		std::cout << vect[i] << " ";
	for (int i = 0; i<N - k; i++)
		std::cout << vect[i] << " ";
	std::cout << "\n";


	return 0;
}
