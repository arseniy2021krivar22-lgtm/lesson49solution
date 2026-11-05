#include "logic.h"
//best case - 0(1)
// O(N)
bool is_divider(int number, int divider) {
	return number % divider == 0;
}
bool is_perfect_number(int number) {
	if (number <= 0 || number % 2 == 1) {
		return false;
	}

	int sum = 1;
	int n = number / 2;
	for (int div = 2; div <= n; div++) {
		if (is_divider(number, div)) {
			sum += div;
		}
	}

	return number == sum;
}