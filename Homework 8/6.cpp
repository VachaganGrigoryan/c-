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
    std::vector<int> A(n);
    int Sum = 0;
    for(int i=0;i<n;i++)
    {
        std::cin >> A[i];
        Sum += A[i];
    }
    selectionSort(A);
    std::vector<int> include(n);
    int l_len = n;
    int r_len = 0;
    int l_sum = Sum;
    int r_sum = 0;
    int diff_before = Sum;
    
    while(true)
    {   
        if( l_sum > r_sum)
        {
            for(int i=0;i<n;i++)
                if (include[i] == 0 and fabs((l_sum - A[i]) - (r_sum + A[i])) < fabs(l_sum - r_sum))
                {
                    include[i] = 1;
                    l_sum -=A[i];
                    r_sum += A[i];
                }
        }
        else if (r_sum > l_sum)
        {
            for(int i=0;i<n;i++)
                if (include[i] == 1 and fabs((r_sum - A[i]) - (l_sum + A[i])) < fabs(l_sum - r_sum))
                {
                    include[i] = 0;
                    r_sum -=A[i];
                    l_sum += A[i];
                } 
        }            
        int diff_after = fabs(l_sum - r_sum);
        if (diff_before == diff_after or diff_after == 0)
            break;
        else if (diff_after < diff_before)
            diff_before = diff_after;
    }
    int a = int(fabs(l_sum - r_sum));
    std::cout << a << "\n" << "l_sum = "<<l_sum<<"  r_sum = "<<r_sum<<"\n";
}
