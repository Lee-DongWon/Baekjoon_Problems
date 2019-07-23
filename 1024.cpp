#include <stdio.h>

int main() {
	int n, k, a;

	scanf("%d %d", &n, &k);

	for (int i = k; i <= 100; i++) {
		if (i % 2 == 1) {
			if (n%i == 0) {
				a = n / i - (i - 1) / 2;
				if (a >= 0) {
					for (int j = 0; j < i; j++) {
						printf("%d ", a + j);
					}
					printf("\n");
					return 0;
				}
			}
		}
		else {
			if (n % (i / 2) == 0) {
				if (((n / (i / 2)) - i + 1) % 2 == 0) {
					a = ((n / (i / 2)) - i + 1) / 2;
					if (a >= 0) {
						for (int j = 0; j < i; j++) {
							printf("%d ", a + j);
						}
						printf("\n");
						return 0;
					}
				}
			}
		}
	}

	printf("-1\n");

	return 0;
}
