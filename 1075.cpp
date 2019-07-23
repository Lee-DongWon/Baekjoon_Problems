#include <stdio.h>

int main() {
	int n, f, remain;
	int result;

	scanf("%d", &n);
	scanf("%d", &f);

	n = (n / 100) * 100;

	remain = n % f;
	if (remain == 0) {
		result = 0;
	}
	else {
		result = f - remain;
	}

	if (result < 10) {
		printf("0%d", result);
	}
	else {
		printf("%d", result);
	}

	return 0;

}