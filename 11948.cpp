#include <stdio.h>

int main() {
	int arr1[4] = { 0 }, arr2[2] = { 0 };
	int sum = 0, temp;

	for (int i = 0; i < 4; i++) {
		scanf("%d", &arr1[i]);
	}

	for (int i = 0; i < 4; i++) {
		for (int j = i; j < 4; j++) {
			if (arr1[i] > arr1[j]) {
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}

	sum = sum + arr1[1] + arr1[2] + arr1[3];


	for (int i = 0; i < 2; i++) {
		scanf("%d", &arr2[i]);
	}

	if (arr2[0] > arr2[1]) {
		sum += arr2[0];
	}
	else {
		sum += arr2[1];
	}

	printf("%d\n", sum);

	return 0;
}