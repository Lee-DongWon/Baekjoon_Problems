#include <stdio.h>

int getnum(int n) {
	int sum = n;

	while (n > 0) {
		sum = sum + n % 10;
		n /= 10;
	}

	return sum;
}

int main() {
	int k;

	scanf("%d", &k);

	for (int i = k - 54; i < k; i++) {
		if (getnum(i) == k) {
			printf("%d\n", i);
			return 0;
		}
	}

	printf("0\n");

	return 0;
}