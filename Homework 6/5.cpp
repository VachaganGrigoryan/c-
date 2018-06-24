#include <vector>	
#include <iostream>

int maxModa(std::vector<int> v) 
{
	int	max = v[0];
	for (int i = 1; i < v.size(); ++i)
		if (max<v[i])
			max = v[i];
	return max;
}

int countingsort(std::vector<int>&v)
{
	std::vector<int> moda, moda_count; // v = 100 200 100 100 300 400 , moda = 100,200,300,400, moda_count = 3,1,1,1
	
	for (int i = 0; i < v.size(); ++i) {
		bool m = true;
		for (int j = 0; j < moda.size(); ++j)
			if (v[i] == moda[j]) {
				m = false;
				moda_count[j]++; // moda_count[ ] + 1
				break;
			}
		if (m) { // m = true
			moda.push_back(v[i]); // moda[0] = 100
			moda_count.push_back(1); // moda_count[0] = 1
		}
	}

	// moda = 100,200,300,400, moda_count = 2,1,2,1

	std::vector<int> max_moda; // max_moda = 100, 300

	for (int i = 0; i < moda_count.size(); ++i)
		if (moda_count[i] == maxModa(moda_count)) //  maxModa(moda_count) return 2
			max_moda.push_back(moda[i]);

	return maxModa(max_moda);
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);

	for (int i = 0; i < n; ++i)
		std::cin >> v[i];

	std::cout << "\n" << countingsort(v) << "\n";
}