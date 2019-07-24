#include <stdio.h>

int main() {
	int n, cnt = 1;

	scanf("%d", &n);

	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
			cnt++;
		}
		else {
			n = 3 * n + 1;
			cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}