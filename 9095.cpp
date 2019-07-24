#include <stdio.h>

int fibo(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	if (n == 3) {
		return 4;
	}
	if (n >= 4) {
		return fibo(n - 1) + fibo(n - 2) + fibo(n - 3);
	}
}

int main() {
	int n;
	int arr[20] = { 0 }, result[20] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		result[i] = fibo(arr[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}