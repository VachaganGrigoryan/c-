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

bool inc(int k,std::vector<int> &include){
    for (int w=0; w<include.size(); w++)
        if(k==include[w])
            return false;        
    return true;               
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
    std::vector<int> include;
    int l_sum = 0;
    int r_sum = arr[n-1];
    // int half = sum/2;
    include.push_back(arr[n-1]);

    for (int i=0; i<n-1; i++)
    {
        int min = arr[n-1],k=n-1;
        if (l_sum<r_sum)
        {
            for (int j=0; j<n; j++)
            {
                if(inc(arr[j],include) && fabs(r_sum-(arr[j]+l_sum))<=min)
                {
                    min = fabs(r_sum-(arr[j]+l_sum));
                    k = j;
                    std::cout << "min = " << fabs(r_sum-(arr[j]+l_sum)) <<"\n";
                }                     
            }  
            l_sum += arr[k];
            include.push_back(arr[k]);
            std::cout << "l_sum = " << l_sum <<"\n";
        }
        else 
        {
            for (int j=0; j<n; j++)
            {
                if(inc(arr[j],include) && fabs(l_sum-(arr[j]+r_sum))<=min)
                    {
                        min = fabs(l_sum-(arr[j]+r_sum));
                        k = j;
                    }
            }      
            r_sum += arr[k];
            include.push_back(arr[k]);
            std::cout << "r_sum = " << r_sum << "\n";
        }      
                       
    }

    std::cout << "l_sum = " << l_sum << " r_sum = " << r_sum << "\n";

}