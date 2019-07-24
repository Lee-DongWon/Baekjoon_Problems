#include <stdio.h>
#include <math.h>

bool isprime(int n) {
	for (int i = 2; i <= (int)sqrt((double)n); i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	while (1) {
		scanf("%d", &n);

		if (n == 0) {
			return 0;
		}
		else {
			for (int i = 3; i <= n / 2; i += 2) {
				if (isprime(i) && isprime(n - i)) {
					printf("%d = %d + %d\n", n, i, n - i);
					break;
				}
			}
		}
	}

	return 0;
}