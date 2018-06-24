#include <vector>
#include <iostream>
#include <functional>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int countingsort(std::vector<int>&v)
{
	std::vector<int> moda,moda_count;
	moda.push_back(v[0]);
	moda_count.push_back(0);
	for (int i = 0; i < v.size(); ++i){
		bool m = true;
		for (int j = 0; j < moda.size(); ++j)
			if (v[i]==moda[j]){
				m = false;
				moda_count[j]++;
				break;
			}
		if (m){
			moda.push_back(v[i]);
			moda_count.push_back(1);
		}
	}

	for (int i = 1; i < moda_count.size(); ++i)
		if (moda_count[0] > moda_count[i]){
			moda.erase(moda.begin()+i);
			moda_count.erase(moda_count.begin()+i);
			i--;
		}
		else
			std::swap(moda_count[0], moda_count[i]);
	
	for (int i = 1; i < moda.size(); ++i)
		if (moda[0]<moda[i])
			std::swap(moda[0], moda[i]);

	return moda[0];
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);

	for(int i = 0; i < n; ++i)
		std::cin >> v[i];

	std::cout << "\n" << countingsort(v) << "\n";
}