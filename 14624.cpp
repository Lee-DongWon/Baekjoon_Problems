#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("I LOVE CBNU\n");
	}
	else {
		int a = 0;
		for (int i = 0; i < n; i++) {
			printf("*");
		}
		printf("\n");

		while (2 * a < n) {
			for (int i = 0; i < n / 2 - a; i++) {
				printf(" ");
			}
			printf("*");
			if (a == 0) {
				printf("\n");
			}
			else {
				for (int i = 0; i < 2 * a - 1; i++) {
					printf(" ");
				}
				printf("*\n");
			}
			a++;
		}
	}

	return 0;
}