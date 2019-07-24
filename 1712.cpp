#include <stdio.h>

int main() {
	long long a, b, c;
	long long result;

	scanf("%lld %lld %lld", &a, &b, &c);

	if (b >= c) {
		printf("-1\n");
	}
	else {
		result = a / (c - b);
		printf("%d\n", result + 1);
	}

	return 0;
}