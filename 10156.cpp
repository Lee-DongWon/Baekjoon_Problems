#include <stdio.h>

int main() {
	int k, n, m;
	int left, money;

	scanf("%d %d %d", &k, &n, &m);

	money = k * n;

	if (money > m) {
		left = money - m;
	}
	else {
		left = 0;
	}

	printf("%d", left);

	return 0;
}