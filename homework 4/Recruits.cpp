#include <iostream>
int main()
{
	int n, iradarcutyun, policie = 0,  hancagorc = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> iradarcutyun;
		if (iradarcutyun > 0)
			policie += iradarcutyun;
		else if (policie > 0 && iradarcutyun < 0)
			policie += iradarcutyun;
		else
			hancagorc += iradarcutyun;
	}

	std::cout << std::abs(hancagorc) << "\n";

	return 0;
}