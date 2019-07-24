#include <stdio.h>

int getMax(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int a, b, c, result, max;

	scanf("%d %d %d", &a, &b, &c);

	max = getMax(getMax(a, b), c);

	if (a == b) {
		if (b == c) {
			result = 10000 + 1000 * a;
		}
		else {
			result = 1000 + 100 * a;
		}
	}
	else {
		if (b == c) {
			result = 1000 + 100 * b;
		}
		else if (a == c) {
			result = 1000 + 100 * a;
		}
		else {
			result = 100 * max;
		}
	}


	printf("%d\n", result);
	return 0;
}