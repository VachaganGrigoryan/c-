#include <iostream>

bool bitPoisitionCheck(const int value, const size_t position) {
	return (value & (1 << position)) == 0 ? false : true;
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Russian");

	const int size = 10;
	int Array[size];


	for (size_t i(0); i < size; ++i) {
		std::cout << "Введите " << i + 1 << " элемент : ";
		std::cin >> Array[i];
	}

	int number = 0;
	std::cout << "Введите число : ";
	std::cin >> number;

	int sum = 0;
	for (size_t i(0); i < size; ++i)
		if (bitPoisitionCheck(number, i)) sum += Array[size - 1 - i];

	std::cout << "\nПропускная способность равна : " << sum << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}