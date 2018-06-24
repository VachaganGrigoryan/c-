#include <vector>
#include <iostream>
#include <functional>
#include <ctime>
#include <cstdlib>
#include <algorithm>

void selectionSort(std::vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		int min_ind = i;
		for (int j = i; j < v.size(); ++j) 
		{
			if (v[j] < v[min_ind])
				min_ind = j;			
		}
		std::swap(v[i], v[min_ind]);
	}
}

void bubblesort(std::vector<int>&v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v.size()-i -1; ++j)
			if (v[j] > v[j + 1])
				std::swap(v[j], v[j + 1]);
	}
}

void insertionsort(std::vector<int>&v)
{
	for (int i = 1; i < v.size(); ++i)
	{
		int key = v[i];
		int place = i;
		while ((place > 0) && (v[place] < v[place -1]))
		{
			std::swap(v[place], v[place - 1]);
			--place;
		}
		v[place] = key;
	}
}

void countingsort(std::vector<int>&v,int minElemvalu, int maxElemvalu)
{
	std::vector<int>counts(maxElemvalu - minElemvalu + 1);
	for (int i = 0; i < v.size(); ++i)
		++counts[v[i]-minElemvalu];
	v.clear();
	for (int i = 0; i < counts.size(); ++i)
		for (int j = 0; j < counts[i]; ++j)
			v.push_back(minElemvalu + i);
}



void Sort1(std::vector<int>& v)
{
	std::sort(v.begin(), v.end());
}
void Sort2(std::vector<int>& v)
{

}

void TestSort(std::function<void(std::vector<int>&)> mySort)
{
	int start_time = clock();

	const int testCount = 100;
	const int minVecLength = 1;
	const int maxVecLength = 8;
	const int minElemValue = -20;
	const int maxElemValue = 20;

	int failCount = 0;

	for (int test = 0; test < testCount; ++test)
	{
		int len = rand() % (maxVecLength - minVecLength + 1) + minVecLength;
		std::vector<int> v(len);
		for (int i = 0; i < len; ++i)
		{
			v[i] = rand() % (maxElemValue - minElemValue + 1) + minElemValue;
		}
		std::vector<int> v_original = v;
		std::vector<int> v_etalone = v;
		mySort(v);
		std::sort(v_etalone.begin(), v_etalone.end());

		if (v == v_etalone)
		{
			std::cout << ".";
		}
		else
		{
			++failCount;
			std::cout << "Fail: ";
			for (int j = 0; j < (int)v_original.size(); ++j)
				std::cout << v_original[j] << " ";
			std::cout << "\n";
		}

	}
	std::cout << '\n';
	if (failCount == 0)
	{
		std::cout << "All tests succeeded.\n";
	}
	else
	{
		std::cout << failCount << " out of " << testCount << "tests failed.\n";
	}

	int end_time = clock();
	std::cout << "Total execution time: " << end_time - start_time << " msecs.\n";
}


int main()
{
	srand(time(0));
	TestSort(selectionSort);
	TestSort(bubblesort);
	TestSort(insertionsort);
	TestSort(std::bind(countingsort, std::placeholders::_1, -20, 20));
}