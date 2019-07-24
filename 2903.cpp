#include <stdio.h>

int main() {
	int n;
	int arr[16] = { 0 };
	for (int i = 1; i < 16; i++) {
		arr[i] = 2 * arr[i - 1] + 1;
	}

	scanf("%d", &n);

	printf("%d\n", (arr[n] + 2)*(arr[n] + 2));

	return 0;
}