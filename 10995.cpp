#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 1; i < n; i++) {
		if (i == 1) {
			for (int j = 0; j < n - 1; j++) {
				printf(" ");
			}
			printf("*\n");
		}
		else {
			for (int j = 0; j < n - i; j++) {
				printf(" ");
			}
			printf("*");
			for (int j = 0; j < 2 * i - 3; j++) {
				printf(" ");
			}
			printf("*\n");
		}
	}


	for (int i = 0; i < 2 * n - 1; i++) {
		printf("*");
	}

	return 0;
}