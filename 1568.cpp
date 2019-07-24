#include <stdio.h>

int main() {
	int n, sec = 0, k = 0;

	scanf("%d", &n);

	while (n > 0) {
		while (k < n) {
			sec++;
			k++;
			n -= k;
		}
		k = 0;
	}

	printf("%d\n", sec);

	return 0;
}