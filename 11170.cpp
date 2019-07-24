#include <stdio.h>

int count(int n) {
	int cnt = 0;
	if (n == 0) {
		return 1;
	}
	else {
		while (n > 0) {
			if (n % 10 == 0) {
				cnt++;
			}
			n /= 10;
		}
		return cnt;
	}
}

int main() {
	int t;
	int sum = 0;

	scanf("%d", &t);

	while (t--) {
		int a, b;
		sum = 0;
		scanf("%d %d", &a, &b);
		for (int i = a; i <= b; i++) {
			sum += count(i);
		}
		printf("%d\n", sum);
	}

	return 0;
}