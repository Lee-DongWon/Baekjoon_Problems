#include <stdio.h>

int main() {
	while (1) {
		int cnt = 0;
		int n;

		scanf("%d", &n);

		if (n == -1) {
			return 0;
		}
		else {
			for (int i = 1; i < n; i++) {
				if (n%i == 0) {
					cnt += i;
				}
			}

			if (cnt != n) {
				printf("%d is NOT perfect.\n", n);
			}
			else {
				printf("%d = 1 ", n);
				for (int i = 2; i < n; i++) {
					if (n%i == 0) {
						printf("+ %d ", i);
					}
				}
				printf("\n");
			}
		}
	}

	return 0;
}