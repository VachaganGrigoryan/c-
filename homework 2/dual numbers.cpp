#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int n = N;
	int a = n % 10;
	bool has_check_digit_2 = false;
	int b;
	bool is_dual = true;
	while (n != 0)
	{
		int d = n % 10;// cankaca tvanshan
		if (d != a)
		{
			has_check_digit_2 = true;
			b = d;
			break;
		}
		n /= 10;
	}
	if (has_check_digit_2)
	{
		
		while (n != 0)
		{
			int d = n % 10;
			if (d != a && d != b)
			{
				is_dual = false;
				break;
			}
			n /= 10;
		}
	}
	if (is_dual)
	{
		cout << "Dual" <<endl;
	}
	else
	{
	    cout << "Not dual" <<endl;
	}
}