#include <iostream>
#include <vector>
#include <cmath>

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



int main()
{

    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << "sum = " << sum << "\n";
    
    selectionSort(arr);
    int max = arr[n-1];
    int half = sum/2;
    int k;

    std::cout << "half = " << half << " max = " << max << "\n";

    if (max <= half)
    {
        for (int i=n-2; i>=0; i--)
        {
                if (max + arr[i] <= half)
                    max+= arr[i];
        }
        k = sum - max;
        std::cout << (k - max) << "\n";
    }
    else 
    {
        k= sum - max;
        std::cout << (max - k) << "\n";
    }

}