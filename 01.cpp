#include <iostream>
#include <array>

int main() {
	const int q = 1100;
	int p;
	std::cin >> p;
	int x;
	int n;

	for (int i = 0; i < p; i += 1) {
		std::array<int, q> mass{ 0 };
		std::cin >> n;
		std::cin >> x;
		int count = 0;
		int num = 0;
		int t = 0;
		for (int j = 0; j < n; j += 1) {
			int el;
			std::cin >> el;
			mass[el - 1] = el;
		}
		for (int k = 0; k < 1100; k += 1) {
			t = mass[k];
			if ((t == 0) && (count <= x)) {
				count += 1;
				num = k;
			}

			if ((t == 0) && (count > x)) {
				std::cout << num << '\n';
				num = 0;
				break;
			}

		}

	}
	return 0;
}