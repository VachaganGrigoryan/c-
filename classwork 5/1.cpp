#include<iostream>
#include<vector>
#include<string>

int main()
{
	int n;
	std:: cin >> n;
	std::vector<std::string> v1(n);
	std::vector<std::string> it;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v1[i];
		if (v1[i][v1[i].size() - 1] == 'o')
		{
			it.push_back(v1[i] + " - m.");
		}
			
		else if (v1[i][v1[i].size() - 1] == 'a')
		{
			it.push_back(v1[i] + " - f.");
		}

	}
	std::cout << it.size()<<"\n";
	for (int i = 0; i < it.size(); ++i)
		std::cout << it[i]<<"\n" ;
	
	system("pause");
}
