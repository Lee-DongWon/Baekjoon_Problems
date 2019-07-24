#include <stdio.h>

int main() {
	int a1, a2, a3, a4;

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

		sum = sum + a1 + a2 + a3 + a4;

		if (sum == 0) {
			printf("D\n");
		}
		else if (sum == 1) {
			printf("C\n");
		}
		else if (sum == 2) {
			printf("B\n");
		}
		else if (sum == 3) {
			printf("A\n");
		}
		else if (sum == 4) {
			printf("E\n");
		}
	}

	return 0;
}