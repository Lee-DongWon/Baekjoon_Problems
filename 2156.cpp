#include <stdio.h>

int Max(int a, int b, int c) {
	if (a >= b) {
		if (a >= c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		if (b >= c) {
			return b;
		}
		else {
			return c;
		}
	}
}

int main() {
	int n;
	int arr[10001] = { 0 };
	int result[10001] = { 0 };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	result[1] = arr[1];
	result[2] = arr[1] + arr[2];

	for (int i = 3; i <= n; i++) {
		result[i] = Max(result[i - 3] + arr[i - 1] + arr[i], result[i - 2] + arr[i], result[i - 1]);
	}

	printf("%d", result[n]);


	return 0;
}