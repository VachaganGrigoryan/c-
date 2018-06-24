#include<iostream>
#include<vector>
#include<string>
int main()
{
	std::string A;
	std::string B;
	std::cin >> A >> B;
	if (A.size() < B.size())
		std::cout << "<" << "\n";
	else if (A.size() > B.size())
		std::cout << ">" << "\n";
	else
	{
		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] > B[i])
			{
				std::cout << ">" << "\n";
				return 0;
			}	
			else if (A[i]<B[i]) 
			{
				std::cout << "<" << "\n";
				return 0;
			}
		}
		std::cout << "=" << "\n";
	}
		
			
	return 0;

}