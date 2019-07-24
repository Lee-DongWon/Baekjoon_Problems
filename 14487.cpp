#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, temp, sum = 0;

	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);

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

	for (int i = 0; i < n - 1; i++) {
		sum += arr[i];
	}

	printf("%d", sum);

	return 0;
}