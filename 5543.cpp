#include <stdio.h>

int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int b1, b2, b3, d1, d2;
	int min1, min2, result;

	scanf("%d", &b1);
	scanf("%d", &b2);
	scanf("%d", &b3);
	scanf("%d", &d1);
	scanf("%d", &d2);

	min1 = min(min(b1, b2), b3);
	min2 = min(d1, d2);

	result = min1 + min2 - 50;

	printf("%d", result);

	return 0;
}