#include <stdio.h>

int main() {
	int n, m, sum = 0, min;
	int i = 0;

	scanf("%d", &m);
	scanf("%d", &n);

	while (i*i < m) {
		i++;
	}

	min = i * i;

	if (min > n) {
		printf("-1\n");
	}

	else {
		while (i*i <= n) {
			sum = sum + i * i;
			i++;
		}

		printf("%d\n", sum);
		printf("%d\n", min);
	}

	return 0;

}