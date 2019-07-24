#include <stdio.h>

bool isPrime(int a) {
	if (a == 1) {
		return false;
	}
	else if (a == 2) {
		return true;
	}
	else {
		for (int i = 2; i < a; i++) {
			if (a%i == 0) {
				return false;
			}
		}
		return true;
	}
}

int main() {
	bool check = true;
	int m, n, sum = 0, min;

	scanf("%d", &m);
	scanf("%d", &n);

	for (int i = m; i <= n; i++) {
		if (isPrime(i)) {
			sum += i;
			if (check) {
				min = i;
				check = false;
			}
		}
	}
	if (sum > 0) {
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	else {
		printf("-1\n");
	}

	return 0;
}