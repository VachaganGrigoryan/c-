#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	
 	for(int i=0; i<n; ++i)
	{
		int	k=0;
		for(int j=0; j<n; ++j)
			if (j%2==0)
			{
				std::cout<<k+i+1<< " ";
				k = k+2*n; 
			}
			else
				std::cout<<k-i<< " ";
		std::cout<<"\n";
	}
}