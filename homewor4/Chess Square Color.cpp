#include<iostream>

int main()
{
	int n;
	char k;
	std::cin >> k >> n;
	k += -'a' + 1;	
	if((k+n)%2==0)
		std::cout << "black" << "\n";
	else
		std::cout << "white" << "\n";
	return 0;

}
/*#include <iostream>

int main()
{
	int n;
	char c;
	std::cin >> c >> n;
	c += -'a' + 1;
	((c + n) % 2 == 0 ? std::cout << "black\n" : std::cout << "white\n");

}*/