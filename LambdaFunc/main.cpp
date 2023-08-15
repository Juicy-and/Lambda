#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> v = { 4,7,9,14,12 };
	std::cout << "Входные данные: ";
	std::for_each(v.begin(), v.end(), [](const int n) { std::cout << n << ' '; });
	std::cout << "\nВыходные данные: ";
	std::for_each(v.begin(), v.end(), [](const int n) {
		if (n % 2 == 0)
			std::cout << n << " ";
		else if (n % 2 == 1)
			std::cout << n * 3 << " ";
		});
}