#include <stdio.h>

int main() {
	int sum = 0, min = 100;

	for (int i = 0; i < 7; i++) {
		int a;
		scanf("%d", &a);
		if (a % 2 == 1) {
			sum += a;
			if (min > a) {
				min = a;
			}
		}
	}

	if (sum == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", sum);
		printf("%d\n", min);
	}

	return 0;
}