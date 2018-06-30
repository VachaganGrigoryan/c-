#include <iostream>
int main()
{
	int n, v, mv;
	std::cin >> n;
	bool achox = true, nvazox = true;
	std::cin >> v;
	for (int i = 1; i < n; ++i)
	{
		mv = v;
		std::cin >> v;
		if (mv == v) {
			achox = false;
			nvazox = false;
			break;
		}
		else if (v < mv)
			achox = false;
		else
			nvazox = false;
	}
	if (achox)
		std::cout << "Ascending" << "\n";
	else if (nvazox)
		std::cout << "Descending" << "\n";
	else
		std::cout << "Neither" << "\n";
	return 0;
}