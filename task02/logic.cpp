#include "logic.h"

bool is_divider(int number, int divider) {
	return number % divider == 0;
}
bool is_perfect_number(int number) {
	int sum = 1;
	int n = number / 2;
	for (int div = 2; div <= n; div++) {
		if (is_divider(number, div)) {
			sum += div;
		}
	}

	return number == sum;
}