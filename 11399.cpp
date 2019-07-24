#include <stdio.h>

int main() {
	int n, sum = 0, temp;
	int arr[1000] = { 0 };
	int result[1000] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			result[i] += arr[j];
		}
		sum += result[i];
	}

	printf("%d", sum);

	return 0;
}