#include <stdio.h>

int main() {
	int arr[5];
	int sum = 0, result;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum = sum + arr[i] * arr[i];
	}

	result = sum % 10;

	printf("%d\n", result);

	return 0;
}