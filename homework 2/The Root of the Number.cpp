yes
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum_m = 0;
	int sum_p = 0;
	while (n != 0)
	{
		int m = n % 10; //1,3,5,....-rd tver
		int p = n / 10 % 10; //2,4,6,....-rd tver,
		sum_m += m;
		sum_p += p;
		n /= 100;
	}
	if (sum_m != sum_p)
	{
		cout << "NO" << "\n";
	}
	else
	{
		cout << "YES" << "\n";
	}

	return 0;
}