/*
do
{
    //statements
}while(payman);
*/

/*
do
{
   X;
}while(Y);

is the same as

X;
while(Y)
{
   X;
}



*/
#include <iostream>
int main()
{
	int x, y;
	do
	{
		std::cout << "Enter two positive integers: ";
		std::cin >> x >> y;
	} while (x <= 0 || y <= 0);

	std::cout << x * y;
}