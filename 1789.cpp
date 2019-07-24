#include <stdio.h>

int main() {
	long long s, sum = 0;
	int i = 1;

	scanf("%lld", &s);

	while (sum <= s) {
		sum += i;
		i++;
	}

	i = i - 2;

	printf("%d", i);

	return 0;
}