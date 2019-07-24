#include <stdio.h>

int main() {
	long long n;

	scanf("%lld", &n);

	if (n % 2 == 1) {
		printf("SK\n");
	}
	else {
		printf("CY\n");
	}

	return 0;
}