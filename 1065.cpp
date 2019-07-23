#include <stdio.h>

int main() {
	int n, cnt = 99;

	scanf("%d", &n);

	if (n < 100) {
		printf("%d", n);
	}
	else if (n >= 100) {
		for (int i = 100; i <= n; i++) {
			if ((i % 10 - (i % 100) / 10) == ((i % 100) / 10 - (i % 1000) / 100)) {
				cnt++;
			}
		}
		if (n < 1000) {
			printf("%d\n", cnt);
		}
		else {
			printf("%d\n", cnt - 1);
		}
	}

	return 0;
}