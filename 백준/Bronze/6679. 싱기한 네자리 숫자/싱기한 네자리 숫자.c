#include <stdio.h>

int main() {
	for (int num = 2992; num <= 9999; num++) {
		int sum_10 = 0, sum_12 = 0, sum_16 = 0;

		for (int i = num; i > 0; i /= 10)
			sum_10 += (i % 10);

		for (int i = num; i > 0; i /= 12)
			sum_12 += (i % 12);

		if (sum_10 != sum_12) continue;

		for (int i = num; i > 0; i /= 16)
			sum_16 += (i % 16);

		if (sum_12 == sum_16)
			printf("%d\n", num);
	}

	return 0;
}