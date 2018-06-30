#include <iostream>

int main()
{
	bool b = true;
	bool b1 = false;

	bool b2 = 4 < 10; //b2 is true;

	b2 = !b2; //toggle b2;

	if (b2) //same as if(b2 == true)
	{
	}

	if (!b2) // same as if(b2 == false)
	{
	}

	int t = b2; //if b2 is true, t will be 1, otherwise 0

	int n;
	bool x = n; //if n is 0, x will be false, otherwise x is true


	//if(a == b == c)
	//if((a == b) == c)

	if (5 == 6 == 0) //true
	{

	}
}