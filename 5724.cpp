#include <stdio.h>

int main() {
	while (1) {
		int n;
		scanf("%d", &n);

		if (n == 0) {
			return 0;
		}
		else {
			int sum = 0;
			while (n > 0) {
				sum += n * n;
				n--;
			}
			printf("%d\n", sum);
		}
	}
}