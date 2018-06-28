#include <iostream>

int NumberOfLadders(int n, int firtsTowerHeight)
{
	if (firtsTowerHeight==0)
		return 1;
	
	int qanak = 0;
	for (int i = 1; i < n; ++i)
	{
		if ((firtsTowerHeight-i) < 0)
			break;

		qanak += NumberOfLadders(i,firtsTowerHeight-i);
	}
	return qanak;
}
int main()
{
	int n;
	std::cin>>n;
	std::cout<<NumberOfLadders(n+1, n);
}