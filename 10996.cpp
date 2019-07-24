#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	if (n == 1) {
		printf("*\n");
	}
	else {
		for (int i = 1; i <= 2 * n; i++) {
			if (i % 2 == 1) {
				for (int j = 0; j < (n + 1) / 2; j++) {
					printf("* ");
				}
				printf("\n");
			}
			else {
				for (int j = 0; j < n / 2; j++) {
					printf(" *");
				}
				printf("\n");
			}
		}
	}

	return 0;
}