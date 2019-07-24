#include <stdio.h>

int main() {
	int n;
	int num = 0;

	scanf("%d", &n);

	while (n > 0) {
		n /= 5;
		num += n;
	}

	printf("%d\n", num);

	return 0;
}