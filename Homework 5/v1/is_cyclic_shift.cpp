#include <iostream>
#include <vector>

bool isSubsequence(const std::vector<int>& sequence, const std::vector<int>& subsequence)
{
	for(int i = 0; i <= (int)sequence.size() - (int)subsequence.size(); ++i)
	{
		bool isSubSeq = true;
		for(int j = 0; j < subsequence.size(); ++j)
		{
			if(sequence[i+j] != subsequence[j])
			{
				isSubSeq = false;
				break;
			}
		}
		if(isSubSeq)
			return true;
	}
	return false;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v1(n), v2(n);
	for(int i = 0; i < n; ++i)
	{
		std::cin >> v1[i];
	}
	for(int i = 0; i < n; ++i)
	{
		std::cin >> v2[i];
		v1.push_back(v1[i]);
	}

	std::cout << (isSubsequence(v1, v2) ? "Yes" : "No");

}