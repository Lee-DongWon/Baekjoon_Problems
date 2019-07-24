#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("1");
	}

	for (int i = 1; i < n; i++) {
		printf("0");
	}

	printf("\n");

	return 0;
}