#include <stdio.h>

int main() {
	int arr[2][8] = { 0 };
	int temp, sum = 0;

	for (int i = 0; i < 8; i++) {
		arr[0][i] = i + 1;
		scanf("%d", &arr[1][i]);
	}

	for (int i = 0; i < 8; i++) {
		for (int j = i; j < 8; j++) {
			if (arr[1][i] > arr[1][j]) {
				temp = arr[1][i];
				arr[1][i] = arr[1][j];
				arr[1][j] = temp;

				temp = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = temp;
			}
		}
	}

	for (int i = 3; i < 8; i++) {
		sum += arr[1][i];
		for (int j = i; j < 8; j++) {
			if (arr[0][i] > arr[0][j]) {
				temp = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = temp;
			}
		}
	}

	printf("%d\n", sum);
	for (int i = 3; i < 8; i++) {
		printf("%d ", arr[0][i]);
	}

	return 0;

}