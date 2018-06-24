#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool largest_number = false;
	while (n > 9)
	{
		int m = n % 10;//m-verjin tvanshanna
		int p = n / 10 % 10;//p-n naxaverjin tvanshanna
		if (p < m)
		{
			largest_number = true;
			cout << "YES" << " ";
			break;
		}
		n /= 10;
	}
	if (!largest_number)
	{
		cout << "NO" << " ";
	}


}