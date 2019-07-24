#include <stdio.h>

int cal(int n) {
	int m = n;
	while (n != 0) {
		m = m + n % 10;
		n = n / 10;
	}
	return m;
}

int main() {
	int result[11000] = { 0 };
	for (int i = 1; i <= 10000; i++) {
		result[cal(i) - 1] = 1;
	}

	for (int i = 0; i < 10000; i++) {
		if (result[i] == 0) {
			printf("%d\n", i + 1);
		}
	}


	return 0;
}