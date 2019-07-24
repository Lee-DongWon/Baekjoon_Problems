#include <stdio.h>

int main() {
	int n;
	int result[1001] = { 0 };

	scanf("%d", &n);

	result[1] = 1;
	result[2] = 3;



	for (int i = 3; i <= 1000; i++) {
		result[i] = (result[i - 1] + 2 * result[i - 2]) % 10007;
	}

	printf("%d\n", result[n]);

	return 0;
}