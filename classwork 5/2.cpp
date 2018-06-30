#include<iostream>
#include<vector>
#include<string>
int main()
{
	std::string M;
	std::string m;
	std::cin >> M >> m;
	for (int i = 0; i <= M.size() - m.size(); ++i)
	{
		bool genom = true;

		for (int j = 0; j < m.size(); ++j)
		{
			if (m[j] != M[i + j])
			{
				genom = false;
				break;
			}				
		}
		
		if (genom)
			std::cout << i;
	}

}