#include <stdio.h>

int main() {
	int n, temp, sum = 0;
	int arr1[50] = { 0 };
	int arr2[50] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr2[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr1[i] < arr1[j]) {
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr2[i] > arr2[j]) {
				temp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		sum = sum + arr1[i] * arr2[i];
	}

	printf("%d", sum);

	return 0;
}
