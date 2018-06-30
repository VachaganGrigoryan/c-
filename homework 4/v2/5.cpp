#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	
	int unsolved_crimes = 0;
	int free_officers = 0;

	for(int i = 0; i < n; ++i)
	{
		int hired_officers;
		std::cin >> hired_officers;
		if(hired_officers == -1) //new crime
		{
			if(free_officers == 0)
				++unsolved_crimes;
			else
				--free_officers;
		}
		else
		{
			free_officers += hired_officers;
		}
	}
	std::cout << unsolved_crimes;
}